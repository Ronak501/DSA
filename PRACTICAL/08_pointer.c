#include<stdio.h>

void swapf(int x, int y){
    int c;

    c=x;
    x=y;
    y=c;

    printf("Enter the value of x:%d",x);
    printf("\nEnter the value of y:%d",y);
}

void bubble(int *a, int *b){
    int c;

    c=*a;
    *a=*b;
    *b=c;
}

void main(){
    int a,b;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    swapf(a,b);
    bubble(&a,&b);
    
    printf("\nEnter the value of a:%d",a);
    printf("\nEnter the value of b:%d",b);

}