a = int(input())
b = int(input())
if a > b:
    aux = a
    a = b
    b = aux

for c in range(a, b):
    if c % 5 == 2 or c % 5 == 3:
        print(c)