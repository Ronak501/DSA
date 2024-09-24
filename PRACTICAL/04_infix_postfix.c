#include<stdio.h>

int i,j=0,top=-1;
char stack[20],x,infix[30],postfix[30],ch,priority;

void push(char c){
    top++;
    stack[top]=c;
}

char pop(){
    x=stack[top];
    --top;
    return x;
}

int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int incoming(char c){
    int p;
    switch(c){
        case '+':
        case '-':p=1;
                break;
        case '*':
        case '/':p=3;
                break;
        case '^':p=6;
                break;
        case '(':p=7;
                break;
    }
    return p;
}

int instack(char c){
    int p;
    switch(c){
        case '+':
        case '-':p=2;
                break;
        case '*':
        case '/':p=4;
                break;
        case '^':p=5;
                break;
        case '(':p=0;
                break;
        case '#':p=-1;
                break;
    }
    return p;
}

void main(){
   
    push('#');

    printf("Enter infix string:");
    scanf("%s",infix);

    for(i=0; infix[i]!='\0'; i++){

        ch=infix[i];
        if(ch>='a' && ch<='z'){
            postfix[j]=ch;
            j++;
        }
        else if(ch=='('){
            push('(');
        }
        else if(ch==')'){
            while((x=pop())!='('){
                postfix[j]=x;
                j++;
            }
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){
            priority=incoming(ch);
            while(instack(stack[top])>=priority){
                postfix[j]=pop();
                j++;
            }
            push(ch);
        }  
        else{
            while(incoming(ch)<=instack(ch)){
                x=pop();
                postfix[j]=x;
                j++;
            }
            push(ch);
        }
    }

    while(!isempty()){
        x=pop();
        postfix[j]=x;
        j++;
    }

    postfix[j-1]='\0';
    printf("Postfix String: %s",postfix);   
}