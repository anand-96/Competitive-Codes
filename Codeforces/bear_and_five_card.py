n,q=input().split()
A=[int(i) for i in input().split()]
Min=1000000000
Max=0
for i in range(len(A)):
    if A[i]>int(Max):
        Max=A[i]
    if A[i]<int(Min):
        Min=A[i]

for i in range(int(q)):
    x=input()
    if int(x)>=int(Min) and int(x)<=int(Max):
        print("Yes")
    else:
        print("No")