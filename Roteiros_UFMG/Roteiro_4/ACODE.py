while True:
    x = input()
    if x == '0':
        exit()
    
    sz = len(x)
    pd = [0]*(sz)
    pd[0] = 1

    for c in range(1, sz):
        if int(x[c]) > 0:
            pd[c] = pd[c-1]

        val = 10*(int(x[c-1]))+(int(x[c]))
        if int((val<=26) and (val>=10)):
            if(c < 2):
                pd[c] += pd[0]
            else:
                pd[c] += pd[c-2]
    
    print(pd[sz-1])