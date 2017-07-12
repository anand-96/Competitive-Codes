#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<Math.h>
int main()
{
    long int n;
    int i,col[10000],row=0,j,k,a,b,c;
    char arr[100000],alpha[27];
    for(i=1;i<27;i++)
        alpha[i]='A'+i-1;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr);
        if(arr[0]=='R' && !isalpha(arr[1]))
        {
            for(j=1;arr[j]!='C';j++)
            {
                col[j]=arr[j]-48;
//                printf("%d",col[j]);
            }
            for(k=j+1;arr[k];k++)
            {
                row=row*10+(int)(arr[k]-48);
  //              printf("%d\n",row);
            }
                a=row;
            if(row<27){
                    printf("%c",arr[row]);
                }
            else if(row<677)
            {
                a=row%26;
                b=row/26;
                printf("%c%c",alpha[b],alpha[a]);
            }

            else if(row<17577)
            {
                a=row%26;
                b=(row/26)%26;
                c=(row/26)/26;
                printf("%c%c%c",alpha[c],alpha[b],alpha[a]);
            }

            for(j=1;col[j];j++)
             printf("%d",col[j]);
        }
        else{
            printf("no");
        }
    }
}
