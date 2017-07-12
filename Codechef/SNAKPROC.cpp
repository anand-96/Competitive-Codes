n=int(input())
arr=[int(x) for x in input().split()]
Q=int(input())
while Q>0:
    t=int(0)
    x=int(input())
    i=int(n)-1
    ans=int(arr[n])
    while i>=0:
        t=int(ans)*int(x)
        ans=t+int(arr[i])
        i=i-1
    print(ans%786433)
    Q=Q-1