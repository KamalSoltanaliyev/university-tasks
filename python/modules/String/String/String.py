# 1. Obratnaya stroka
s = "hello"
print(s[::-1])

# 2. Proverka polindroma
s = "madam"
print(s == s[::-1])

# 3. Kolicestvo slov v stroke
sentence = "This is an example sentence"
print(len(sentence.split()))

# 4. Zamena simvolov
s = "hello world"
print(s.replace("o", "0"))

# 5. Castota simvolov
s = "hello"
freq = {char: s.count(char) for char in set(s)}
print(freq)

