#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void checkEquivalent(int x[],int y[]){
    int A,A1;
    A=abs(x[0]*((y[1]-y[2]))+x[1]*((y[2]-y[0]))+x[2]*((y[0]-y[1])))/2.0;
    A1=abs(x[3]*((y[4]-y[5]))+x[4]*((y[5]-y[3]))+x[5]*((y[3]-y[4])))/2.0;
    if(A1==A){
       printf("Traingle are equivalent");
    }
    else{
    printf("Triangle are not equivalent");
    }
}

int main()
{
    int x[10],y[10],i;
    FILE * fp=fopen("a.txt","r");
    i=0;
    while(!feof(fp)){
    fscanf(fp,"%d%d",&x[i],&y[i]);
    i++;
    }
    checkEquivalent(x,y);
    fclose(fp);
}

