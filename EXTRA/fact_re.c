#include<stdio.h>

int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
void main()
{
    int n;
    printf("Enter num:");
    scanf("%d",&n);
    printf("Factorial of %d is %d.",n,fact(n));
}