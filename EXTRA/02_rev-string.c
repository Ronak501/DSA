#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
 
int top = -1, front = -1;
int stack[MAX];
void push(char);
void pop();
 
void main()
{
    int i, choice;
    char s[MAX], b;
    while (1)
    {
        printf("\n1-Enter string\n2-Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the String: ");
            scanf("%s", s);
            for (i = 0;s[i] != '\0';i++)
            {
                b = s[i];
                push(b);
            }
            printf("The reverse of string is: ");
            for (i = 0;i < strlen(s); i++)
            {
                if (stack[top] != stack[front])
                {
                    pop();
                }
            }
            break;

        case 2:
            exit(0);

        default:
            printf("Enter correct choice\n");
        }
    }
}
 
/* to push a character into stack */
void push(char a)
{
    top++;
    stack[top]  =  a;
}
 
/* to delete an element in stack */
void pop()
{
    printf("%c", stack[top]);
    top--;
}