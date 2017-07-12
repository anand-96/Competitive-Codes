t=input()
for i in range(int(t)):
    n=input()
    A=[int(i) for i in input().split()]
    B=[int(n) for n in input().split()]
    j=0
    count=0
    k=0
    while j!=int(n):
        if (A[j]-k)>=B[j]:
            count=int(count)+1
        k=A[j]
        j=int(j)+1
    print(count) 