t=int(input())
while t>0:
    m,n=[int(x) for x in input().split()]
    if (m*n-1)%2==1:
        print("Yes")
    else:
        print("No")
    t=t-1  