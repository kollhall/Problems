def smallN(num):
    for i in range(1, 21):
        if num % i != 0:
            return False
    return True

        
num = 1
while True:
    if smallN(num):
        break
    num += 1
print(num)
