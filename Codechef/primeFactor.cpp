#include<stdlib.h>
#define MAX 10000
bool v[MAX];
int len, sp[MAX];

void Sieve(){
	for (int i = 2; i < MAX; i += 2)
        sp[i] = 2;//even numbers have smallest prime factor 2
	for (int i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (int j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int main(){
	Sieve();
	for(int i=0;i <50;i++)
        printf("%d  ",sp[i]);

    return 0;
}
