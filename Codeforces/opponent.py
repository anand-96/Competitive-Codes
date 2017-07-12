n,d=input().split()
flag=int(0)
s=[]
c=int(0)
while int(d)>0:
    arr=input()
    a=[int(x) for x in str(arr)]
    if flag==1:
        s.append(c)
        c=0
        flag=0
    if a.count(0)!=0 and flag==0:
        c=c+1
        flag=0
    else:
        flag=1
    d=int(d)-1
s.append(c)
print(max(s))

