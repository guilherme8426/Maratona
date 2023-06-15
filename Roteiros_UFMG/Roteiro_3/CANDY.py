
while True:
    x = int(input())
    if x == -1:
        exit()
    
    vec = []
    soma = 0
    for c in range(x):
        aux = int(input())
        soma += aux
        vec.append(aux)
    
    if soma%x != 0:
        print(-1)
        continue
    
    res = 0
    med = soma/x
    for c in vec:
        if med <= c:
            continue
        res += med - c
    print(int(res))

