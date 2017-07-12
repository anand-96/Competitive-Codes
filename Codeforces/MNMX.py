t=int(input())
while t>0:
    n=int(input())
    arr=[int(x) for x in input().split()]
    print((len(arr)-1)*min(arr))
    t=t-1