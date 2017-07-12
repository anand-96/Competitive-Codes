n=input()
arr=[int(i) for i in input().split()]
inmin=arr.index(min(arr))
inmax=arr.index(max(arr))
a=[inmin,inmax,int(n)-1-inmin,int(n)-1-inmax]
print(max(a))
