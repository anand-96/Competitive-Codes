#include<stdlib.h>
int main()
{
    char a[100000];
    int i,n,t,r,b,g;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
        scanf("%s",&a);
        r=0; b=0; g=0;
      if(strlen(a)!=n)
            return;
       for(i=0;i<n;i++){
    if(a[i]!='R' && a[i]!='G' && a[i]!='B')
            return;
        if(a[i]=='R')
            r++;
        if(a[i]=='B')
            b++;
        if(a[i]=='G')
            g++;
            }

        printf("%d\n",n-(g>(r>b?r:b)?g:(r>b?r:b)));
    }
}
