# ????????? ??? ??????
str1 = input()
str2 = input()
str3 = input()

# ????????? ????? ?????
lengths = [len(str1), len(str2), len(str3)]

# ????????? ?????
lengths.sort()

# ?????????, ???????? ?? ??? ?????????? ?????????????? ??????????
if lengths[1] - lengths[0] == lengths[2] - lengths[1]:
    print("YES")
else:
    print("NO")

