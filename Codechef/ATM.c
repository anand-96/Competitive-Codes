#include<stdio.h>
#include<stdlib.h>
int main()
{
int x;
float y;
scanf("%d%f",&x, &y);
if(x>0&&x<=2000 && y>=0&&y<=2000){
if(x%5==0&&x<y)
printf("%.2f\n",(y-x-0.50));
else 
printf("%.2f\n",y);
return 0;
}
}