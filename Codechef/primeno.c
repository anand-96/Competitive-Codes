#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned guess,ini;
	unsigned factor;
	unsigned limit;
	int t;
	scanf("%u",&limit);
	    printf("2\n");
		printf("3\n");


        guess=5;
while(guess<=limit)
{
	factor=3;
	while(factor*factor<guess && guess%factor!=0)
        factor+=2;
if(guess%factor!=0)
printf("%d  ",guess);
guess+=2;
}
return 0;
}
