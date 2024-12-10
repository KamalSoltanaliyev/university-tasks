# 1. Prostoy class
class Person:
    def __init__(self, name):
        self.name = name
p = Person("John")
print(p.name)

# 2. Metod klassa
class Math:
    def square(self, x):
        return x**2
m = Math()
print(m.square(4))

# 3. Inheritance 
class Animal:
    def speak(self):
        print("Animal sound")
class Dog(Animal):
    def speak(self):
        print("Gav Gav")
d = Dog()
d.speak()

# 4. Static method
class Utility:
    @staticmethod
    def greet():
        print("Hello!")
Utility.greet()

# 5. Pereqruzka operatorov
class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)
v1 = Vector(1, 2)
v2 = Vector(3, 4)
v3 = v1 + v2
print(v3.x, v3.y)

