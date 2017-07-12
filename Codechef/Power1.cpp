#include <math.h>
#include <stdio.h>

//an example set
int A[] = {1, 5, 7 , 8, 2, 10, 12};

//The function to calculate the subset of the original set
//corresponding to the number given at num
void printSet(unsigned int num,int* arr,unsigned int size)
{
    unsigned int i;
    printf("\t{");
    //for each bit
    for(i=0;i<sizeof(unsigned int)*8;i++)
    {
        if(num&(unsigned int)0x1)//if it's ON print the corresponding value
        {
            if(num >>1 ==0)//if it's the last ON bit
            {//print without comma and terminate the loop
                printf("%d",arr[i]);
                break;
            }
            else
                printf("%d,",arr[i]);
        }
        num = num>>1;//keep shifting right to get more bits
    }
    printf("}\n");
}

int main()
{
    unsigned int size,i,n;

    //get the cardinality of the set and check
    //if it can be represented by an unsigned int
    size = sizeof(A)/sizeof(int);
    if(size > sizeof(unsigned int)*8)
    {
        printf("The given set can not be represented by the size\
         of unsigned int in the system\nQuitting ...");
        return -1;
    }
    //get the number until which we need to iterate
    n = pow(2,size)-1;

    //calculate and print the powerset
    printf("The powerset of {");
    for(i=0;i< size-1; i ++)
        printf("%d,",A[i]);
    printf("%d} is:\n{\n",A[size-1]);
    for(i=0;i<=n;i++)
        printSet(i,A,size);
    printf("}\n");

    return 0;
}
