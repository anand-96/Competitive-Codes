#include<stdlib.h>
void main()
{
	int t,i,j,index,c=0;
	char s[10000];
	scanf("%d",&t);
	if(t>10||t<1)
	exit(1);
	for(i=0;i<t;i++)
    {
	scanf("%s",s);
	//printf("%d\n",strlen(s));
	if(strlen(s)>10000||strlen(s)<1)
	exit(1);
        for(j=0;j<strlen(s);j++)
            {
                if(s[j]=='W'&&c==1)
                    exit(1);
              else if(s[j]=='W'&&c==0){
                    c++;
                    index=j;
                    }
                else if(s[j]!='B'&&s[j]!='W'||c>1)
                            exit(1);
            }
		if(index==strlen(s)-1-index)
			puts("Chef");
			else
			puts("Aleksa");
			c=0;
    }
}
