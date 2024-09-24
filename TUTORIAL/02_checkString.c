#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int top = -1;
int stack[MAX];

void push(char a){
    top++;
    stack[top] = a;
}
void pop(){
    top--;
}

void main()
{
    int i;
    char s[MAX];
    
    printf("\nEnter string:");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == '<')
        {
            push(s[i]);
        }
        if (s[i] == ')' || s[i] == ']' || s[i] == '}' || s[i] == '>')
        {
            pop();
        }   
    }

    if (top == -1)
    {
        printf("The string is balanced\n");
    }
    else
    {   
        printf("The string is not balanced\n");
    }
}

        