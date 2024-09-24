#include<stdio.h>
#include<string.h>
#define size 100
int top=-1,stack[size],x;
int isfull(){
    if(top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(char x){
    if(isfull()){
        printf("stack overflow:");
    }
    else{
        top++;
        stack[top]=x;
    }
}
char pop(){
    if(isempty()){
        printf("empty");
    }
    else{
        x=stack[top];
        top--;
        return x;
    }
}
int incoming(char c){
    int priority;
    switch(c)
        {
            case '+':
            case '-':
                priority=1;
                break;
            case '*':
            case '/':
                priority=3;
                break;
            case '^':
                priority=6;
                break;
            case '(':
                priority=7;
                break;
        }
    return priority;
}
int instack(char c){
    int priority;
    switch(c)
        {
            case '+':
            case '-':
                priority=2;
                break;
            case '*':
            case '/':
                priority=4;
                break;
            case '^':
                priority=5;
                break;
            case '(':
                priority=0;
                break;
            case '#':
                priority=-1;
                break;
        }
    return priority;
}

void main()
{
    int i,j,n,priority;
    char sym,temp;
    char infix[100],postfix[100];
    j=0;
    printf("Enter a infix string:");
    scanf("%s",infix);
    n=strlen(infix);
    stack[0]='#';
    for(int i=0;i<n;i++)
    {
        sym=infix[i];
        if(sym>='A' && sym<='Z' || sym>='a' && sym<='z')
        {
            postfix[j]=sym;
            j++;
        }
        else if(sym=='(')
        {
            push(sym);
        }
        else if(sym==')')
        {
            while(!isempty() && (temp=pop())!='(')
            {
                postfix[j]=temp;
                j++;
            }
        }
        else
        {
            while(!isempty() && incoming(sym) <= instack(stack[top]))
            {
                postfix[j]=pop();
                j++;
            }
            push(sym);
        }
    }
    while(!isempty())
    {
        temp=pop();
        postfix[j]=temp;
        j++;
    }
    postfix[j]='\0';
    printf("Postfix string is:%s",postfix);
}