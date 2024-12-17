a = int(input())
b = int(input())
c = int(input())
if a > b > c or a < b < c:
  print (b)
elif a > c > b or a < c < b:
  print (c)
else:
  print (a)
