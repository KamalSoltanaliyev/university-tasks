# 1. Ctenie fayla
with open("file.txt", "r") as f:
    print(f.read())

# 2. Zapis v file
with open("output.txt", "w") as f:
    f.write("Hello, world!")

# 3. Proverka susestvovaniya fayla
import os
print(os.path.exists("file.txt"))

# 4. Dobavlenie teksta v file
with open("output.txt", "a") as f:
    f.write("\nAppending new line!")

# 5. Postrocnoe cteniye
with open("file.txt", "r") as f:
    for line in f:
        print(line.strip())

