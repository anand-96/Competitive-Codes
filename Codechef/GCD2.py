def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)
        

t=int(input())
while t>0:
    a,b=input().split()
    c=gcd(int(a),int(b))
    print(c) 
    t=t-1