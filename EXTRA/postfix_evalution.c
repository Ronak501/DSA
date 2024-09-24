#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int i,j=0,top=-1,ans=0,stack_ans[5],k=0,element_1,element_2;
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
        if(ch>='0' && ch<='9'){
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

    for(i=0; postfix[i]!='\0'; i++){
        ch=postfix[i];
        if(ch>='0' && ch<='9'){
            int s1 = ch - '0';
            stack_ans[k]=s1;
            k++;
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){
            k--;
            element_1 = stack_ans[k];
            k--;
            element_2 = stack_ans[k];
            switch(ch){

                case '+':
                        ans = (element_1 + element_2);
                        stack_ans[k] = ans;
                        k++;
                        break;
                case '-':
                        ans = (element_1 - element_2);
                        stack_ans[k] = ans;
                        k++;
                        break;
                case '*':
                        ans = (element_1 * element_2);
                        stack_ans[k] = ans;
                        k++;
                        break;
                case '/':
                        ans = (element_1 / element_2);
                        stack_ans[k] = ans;
                        k++;
                        break;
                case '^':
                        ans = (element_1 ^ element_2);
                        stack_ans[k] = ans;
                        k++;
                        break;
            }
        }  
    } 
    printf("\nYour Postfix Evalution:%d",ans);
}