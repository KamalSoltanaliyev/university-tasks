a = int(input())
b = int(input())
c = int(input())
if a and b and c > 0:
  if a+b>c and a+c>b and b+c>a:
    print ("YES")
  else:
    print ("NO")
else:
  print ("NO")
