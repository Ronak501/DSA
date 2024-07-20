// Write a calculator program(add,subtract,multiply,divide). Prepare user defined function for each functionality.
#include<stdio.h>
#include<math.h>

void add(int a,int b){

    int c;

    c=a+b;
    
    printf("\nYour Addition :%d",c);
}

void sub(int a,int b){

    int c;

    c=a-b;
    
    printf("\nYour Substraction :%d",c);
}

void mul(int a,int b){

    int c;

    c=a*b;
    
    printf("\nYour Multification :%d",c);
}

void div(int a,int b){

    int c;

    c=a/b;
    
    printf("\nYour Divide :%d",c);
}

void main(){

    int a,b;

    printf("Enter Your Value A:");
    scanf("%d",&a);

    printf("Enter Your Value B:");
    scanf("%d",&b);

    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
}