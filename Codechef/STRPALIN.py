t=int(input())
while t>0:
    A=input()
    B=input()
    setA=set([x for x in str(A)])
    setB=set([x for x in str(B)])
    setC=setA-setB
    if len(setA)==len(setC):
        print("No")
    else:
        print("Yes")
    t=t-1