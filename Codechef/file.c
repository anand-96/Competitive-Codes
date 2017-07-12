#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int function(int x[],int y[],int i,int j,int k,int l){
    int A,A1,A2,A3,c=0;
    A=abs(x[i]*((y[j]-y[k]))+x[j]*((y[k]-y[i]))+x[k]*((y[i]-y[j])))/2.0;
    A1=abs(x[i]*((y[j]-y[l]))+x[j]*((y[l]-y[i]))+x[l]*((y[i]-y[j])))/2.0;
    A2=abs(x[j]*((y[k]-y[l]))+x[k]*((y[l]-y[j]))+x[l]*((y[j]-y[k])))/2.0;
    A3=abs(x[i]*((y[k]-y[l]))+x[k]*((y[l]-y[i]))+x[l]*((y[i]-y[k])))/2.0;
    if((A1+A2+A3)==A){
        c++;
    }
    return c;
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
    if(function(x,y,0,1,2,3) || function(x,y,0,1,2,4) || function(x,y,0,1,2,5)){
            printf("Point in common\n");
    }
    else{
            printf("Point not in common\n");
    }
    fclose(fp);
}

