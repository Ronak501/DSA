// Implement C program to convert decimal number into binary using Stack.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
 
int top = -1, front = 0;
int stack[MAX];
void push(int a)
{
    top++;
    stack[top]  =  a;
}

void pop()
{
    top--;
}

void dis(){
    int b,i;
    printf("The binary number is: ");
    for (i = top; i >= front; i--)
    {
        b = stack[i];
        printf("%d", b);
    }
}

void main(){
    int decimalNum, binaryNum;
    int i, choice;
    char s[MAX], b;
    while (1)
    {
        printf("\n1-Enter number\n2-Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter a decimal number: ");
                scanf("%d", &decimalNum);

                if(decimalNum > 0){
                    while (decimalNum > 0){
                        binaryNum = decimalNum % 2;
                        decimalNum = decimalNum / 2;
                        push(binaryNum);
                    }
                    dis();
                }
                else
                {
                    printf("Invalid input. Please enter a positive integer.\n");
                }
                break;
            
            case 2:
                exit(0);

            default:
                printf("Enter correct choice\n");
                break;
        }
    }
}