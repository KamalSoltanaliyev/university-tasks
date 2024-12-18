import os # Moduli os dlya upravleniya operatsionnoy sistemoy
os.system("clear") # Ochishchaem ekran konsoli
import random # Moduli random dlya vyborov sluchaynykh slov

# Initialize - spisok slov dlya igry i peremennye

words = ["BAKU", "PYTHON", "SALAM", "HELLO"] # Spisok slov dlya vybora

word = random.choice(words)  # Vybor sluchaynogo slova iz spiska
guess = "-" * len(word)  # Stroka ugadannykh bukv iznachal'no zapolnena tire
wrong_letters = ""  # Stroka dlya nepravyl'nykh bukv

# Print header - Nachal'nyy ekran igry
print("HANGMAN\n") # Vyvodim zagolovok igry


# Risuyem pustuyu viselitsu
print(""" 
-------
|     
|                       
|    
|    
|
|---------""")

# Main game loop
while True:
    print(f"Current Guess: {guess}")  # Tekushchiy status ugadyvaniya slova
    print(f"Wrong Guesses: {wrong_letters}")  # Nepravyl'nye bukvy

    
    letter = input("\nPlease enter a letter. > ").upper() # Vvod bukvy ot pol'zovatelya
    
    # Proveryaem, est' li bukva v slove
    if letter in word:
        temp = "" # Vremennaya peremennaya dlya novogo statusa slova
        for index in range(len(word)): # Prokhodim po kazhdoy bukve slova
            if letter == word[index]: # Esli bukva ugadana
                temp += letter 
            elif guess[index] != "-": # Esli bukva uzhe byla ugadana ranee
                temp += guess[index]
            else:
                temp += "-" # Zamenyaem neugadannye bukvy tire
        guess = temp
                
    else:
        wrong_letters += letter # Dobavlyaem nepravyl'nuyu bukvu v spisok
        
        
    # Proveryaem, ugadano li slovo
    if word == guess:
        print("You win! Halaldi") # Esli vse bukvy ugadany
        print("""
     O
    \\|/
     |
    / \\""")
        exit()

    # Print the hangman - Risuyem viselitsu v zavisimosti ot kolichestva oshibok

    if len(wrong_letters) == 0:
        print("""
-------
|     
|    
|    
|    
|
|---------""")

    if len(wrong_letters) == 1:
        print("""
-------
|     O
|    
|    
|    
|
|---------""")

    if len(wrong_letters) == 2:
        print("""
-------
|     O
|     |
|     |
|    
|
|---------""")

    if len(wrong_letters) == 3:
        print("""
-------
|     O
|    \\|/
|     |
|    
|
|---------""")

    if len(wrong_letters) == 4:
        print("""
-------
|     O
|    \\|/
|     |
|    / \\
|
|---------""")
    
    if len(wrong_letters) == 5:
        print("""
-------
|     |
|     O
|    /|\\
|     |
|    | |
|---------""")

    # Check for a loser
    if len(wrong_letters) == 5:
        print("You lose! LOX!")
        print(f"The word was {word}")
        exit()