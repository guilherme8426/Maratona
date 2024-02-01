M=input
M()
c=1
for i in sorted(map(int,M().split())):
    if c>=i:c+=i
print(c)