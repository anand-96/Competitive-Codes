#include<stdio.h>
int main() {
    long int a, b, c;
    scanf("%ld %ld %ld",&a,&b,&c);
    if (c == 0) {
        if (a == b)
            printf("YES\n");
        else
        printf("NO\n");
    } else {
        if ((b - a) % c == 0 && (b - a) / c >= 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
