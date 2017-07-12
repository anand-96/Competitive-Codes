int count_1(int n)
  {
    int c=0;
    while(n){
    c++;
    n=n&(n-1);
    }
    return c;
 }
int binary(int n)
{
    int count=0;
    while(n){
    if(n%2==0)
        count++;
        n/=2;
    }
    return count;
}
void main()
{
    int i,a,b,c=0,t=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
       // if(binary(i)==1)
         //   c++;
        if(count_1(i)==1)
        {
            t++;
        }
    }
    //printf("%d\n",c);
  printf("%d\n",t);
}
