def isMultiple(num):
    if (num % 3 == 0) or (num % 5 == 0):
        return True
    else:
        return False

count = 1
sum = 0
while count < 1000:
    if isMultiple(count):
        sum += count
    count+=1
print(sum)
