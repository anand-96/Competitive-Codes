n=input()
arr=[int(i) for i in input().split()]
i=0
flag=0
if arr[0]>15:
    print("15")
    exit(0)
elif int(n)==1:
    print(arr[0]+15)
    exit(0)
else:
    while int(i)!=(int(n)-1):
       if (arr[i+1]-arr[i])>15:
           print(arr[i]+15)
           flag=1
           break
       i=int(i)+1
       
if (90-arr[int(n)-1])>15 and int(n)!=1 and int(flag)!=1:
    print(arr[int(n)-1]+15)
    exit(0)
if int(i)==int(n)-1 and int(n)!=1 and int(flag)!=1:
    print("90")