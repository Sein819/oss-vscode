#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(){
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
}