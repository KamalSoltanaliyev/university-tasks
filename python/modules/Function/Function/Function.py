# 1. Prostaya function
def greet(name):
    return f"Hello, {name}!"
print(greet("Alice"))

# 2. Funksiya s neskolkimi parametrami
def add(a, b):
    return a + b
print(add(3, 4))

# 3. Rekursivnaya funksiya
def factorial(n):
    return 1 if n == 0 else n * factorial(n - 1)
print(factorial(5))

# 4. Funksiya s *args
def sum_all(*args):
    return sum(args)
print(sum_all(1, 2, 3, 4))

# 5. Anonym funksiya (lambda)
square = lambda x: x**2
print(square(5))

