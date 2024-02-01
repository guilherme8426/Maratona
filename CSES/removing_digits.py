# Guloso que passa
n = input()
c = 0

while(int(n)!=0):
    n = str(int(n)-max(map(int, n)))
    c+=1

print(c)