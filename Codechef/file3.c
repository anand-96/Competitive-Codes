#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long int arr[100000],i=1,k,j,count=0;
    int x,ch;
    FILE * fp=fopen("a.txt","r");
    while(!feof(fp)){
       fscanf(fp,"%d",&arr[i]);
       i++;
    }
    k=i;
    while(1){
        printf("\nEnter your option:-\n1:Find Multiple of 11.\n2:Find Multiple of 9.\n3:Find no of inversion\n4:How many no are there at right location.\n5: Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                    count=0;
                    for(i=1;i<k;i++){
                        if(arr[i]%11==0){
                            count++;
                        }
                    }
                    printf("Multiple of 11 = %d",count);
                break;
            case 2:
                    count=0;
                    for(i=1;i<k;i++){
                        if(arr[i]%9==0){
                            count++;
                        }
                    }
                    printf("Multiple of 9 = %d",count);
                break;
            case 3:
                    count=0;
                 for(i=1;i<k;i++){
                        for(j=i+1;j<k;j++){
                            if(arr[i]>arr[j]){
                                count++;
                            }
                        }
                    }
                    printf("No of Inversions = %d\n",count);
                break;
            case 4:
                    count=0;
                    for(i=1;i<k;i++){
                            if(arr[i]==i){
                                count++;
                            }
                    }
                    printf("Numbers of numbers are at their right location = %d\n",count);
                    break;
            case 5:
                    exit(1);

        }
    }
     fclose(fp);
}

