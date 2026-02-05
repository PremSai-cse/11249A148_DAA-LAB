#include<stdio.h>
int main()
{
    int n, i;
    long a = 0, b = 1, c;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms:\n", n);
    for(i = 0; i < n; i++){
        if(i == 0){
            printf("%ld ", a);
        }
        else if(i == 1){
            printf("%ld ", b);
        }
        else{
            c = a + b;
            printf("%ld ", c);
            a = b;
            b = c;
        }
    }
    printf("\n");
    return 0;   
}