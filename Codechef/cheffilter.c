#include<stdlib.h>
#include<string.h>
int k;
char a[10];
char*operate(char*a,char*str)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(str[i]=='+')
        {
            if(a[i]=='b')
                a[i]='w';
            else
                a[i]='b';
        }
    }
    for(i=0;i<10;i++)
        printf("%c",a[i]);
    printf("%d\n",strcmp(a,"bbbbbbbbb"));
    if(strcmp(a,"bbbbbbbbb"))
       k++;
    return a;
}
void main()
{
    int i,j,t,n;
    char str[10];
        scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        if(strlen(a)!=10)
            return;
            for(j=0;a[j];j++)
                if(a[j]!='b'&&a[j]!='w')
                    return;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%s",str);
        if(strlen(str)!=10)
            return;
            for(j=0;str[j];j++)
                if(str[j]!='+'&&str[j]!='-')
                    return;
           strcpy(a,operate(a,str));
           printf("%s\n",a);
        }
    }
}
