#include<stdio.h>

void main(){
    int a,b,c;

    printf("Enter Your Value A:");
    scanf("%d",&a);

    printf("Enter Your Value B  :");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("Your Value of A:%d",a);
    printf("\n Your Value of B:%d",b);
}