sumSquares = 0
squareSum = 0
count = 1
while count <= 100:
    sumSquares += count**2
    squareSum += count
    count+=1

squareSum = squareSum**2
dif = squareSum - sumSquares
print(dif)