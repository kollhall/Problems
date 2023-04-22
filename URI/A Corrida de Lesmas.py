def velocidadeClas(vel):
    if(vel < 10):
        return 1
    elif(10 >= vel < 20):
        return 2
    else:
        return 3

while(True):
    try:
        lista = []
        l = int(input())
        for i in range(l):
            add = input().split(" ")
            add = int(add)
            lista.append(add)
        print(velocidadeClas(max(lista)))
    except EOFError:
        break;
