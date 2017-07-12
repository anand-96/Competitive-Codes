t=int(input())
for i in range(0,t):
    n,b,m=[int(x) for x in input().split()]
    ans=int(0)
    while n>0:
        if n%2==0:
            a=int(n/2)
        else:
            a=int((n+1)/2)
        ans=ans+a*m+b
        m=2*m
        n=n-a
    print(ans-b)