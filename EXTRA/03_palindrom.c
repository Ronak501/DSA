#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
 
int top = -1, front = 0;
int stack[MAX];
void push(char);
void pop();
 
void main()
{
    int i, choice;
    char s[MAX], b;
    while (1)
    {
        printf("\n1-Enter string\n2-Exit");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the String:");
            scanf("%s", s);
            for (i = 0;s[i] != '\0';i++)
            {
                b = s[i];
                push(b);
            }
            for (i = 0;i < (strlen(s) / 2);i++)
            {
                if (stack[top] == stack[front])
                {
                    pop();
                    front++;
                }
                else
                {
                    printf("\n%s is not a palindrome", s);
                    break; 
                }
            }
            if ((strlen(s) / 2)  ==  front)
                printf("\n%s is palindrome",  s);
            front  =  0;
            top  =  -1;
            break;
        case 2:
            exit(0);
        default:
            printf("Enter correct choice");
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
    top--;
}