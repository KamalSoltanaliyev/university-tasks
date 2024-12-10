# 1. Dobavleniye elementov
d = {}
d["name"] = "Alice"
d["age"] = 25
print(d)

# 2. Iterasiya po slovaryu
d = {"a": 1, "b": 2}
for key, value in d.items():
    print(f"{key}: {value}")

# 3. Sortirovka po klucu
d = {"b": 2, "a": 1}
sorted_d = dict(sorted(d.items()))
print(sorted_d)

# 4. Obratniy slovar
d = {"a": 1, "b": 2}
reversed_d = {v: k for k, v in d.items()}
print(reversed_d)

# 5. Obyedineniye slovarey
d1 = {"x": 1}
d2 = {"y": 2}
d1.update(d2)
print(d1)

