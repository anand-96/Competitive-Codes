#include <math.h>
#include<stdlib.h>
#include<stdio.h>
int l;
char * convertNumberIntoArray(unsigned int number) {
    unsigned int length = (int)(log10((float)number)) + 1;
    char * arr = (char *) malloc(length * sizeof(char));
     char* curr = arr;
     l=0;
    do {
    	*curr++ = number % 10;
    	number /= 10;
    	l++;
    } while (number != 0);
    return arr;
}


int main(){
unsigned int x;
int n;
char *arr;
scanf("%u",&x);
arr=convertNumberIntoArray(x);
printf("%d\n",l);
for(int i=0;i<l;i++)
printf("%d ",arr[i]);
}
