import math
n=raw_input()
sum=0
while n!=0:
    sum+=int(math.pow(2,int(n)))
    n=int(n)-1

print(sum)
