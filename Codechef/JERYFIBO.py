from math import *
for i in range(int(input())):
    n=int(input())
    r1 = sqrt(5*n**2+4)
    r2 = sqrt(5*n**2-4)
    isSquare = r1%1 == 0 or r2%1==0
    if(isSquare):
        print("is fibo")
    else:
        print("not fibo")