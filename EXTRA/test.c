#include<stdio.h>
#include<string.h>

int i,j=0,top=-1,stack_ans[5],k=0,element_1,element_2,ans;
char stack[20],x,infix[30],revfix[30],prefix[30],revprefix[30],ch,priority;

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

    printf("Enter Infix string:");
    scanf("%s",infix);
    int n = strlen(infix);

    for (i=0;infix[i]!='\0'; i++)
    {
        revfix[i] = infix[n-1];
        n--;
    }
    for(i=0; revfix[i]!='\0'; i++){
        ch=revfix[i];
        if(ch>='0' && ch<='9'){
            prefix[j]=ch;
            j++;
        }
        else if(ch==')'){
            push(')');
        }
        else if(ch=='('){
            while((x=pop())!='('){
                prefix[j]=x;
                j++;
            }
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){
            priority=incoming(ch);
            while(instack(stack[top])>=priority){
                prefix[j]=pop();
                j++;
            }
            push(ch);
        }  
        else{
            while(incoming(ch)<=instack(ch)){
                x=pop();
                prefix[j]=x;
                j++;
            }
            push(ch);
        }
    }

    while(!isempty()){
        x=pop();
        prefix[j]=x;
        j++;
    }

    prefix[j-1]='\0';
    n = strlen(prefix);
    for (i=0;prefix[i]!='\0'; i++)
    {
        revprefix[i] = prefix[n-1];
        n--;
    }
    printf("Prefix String:%s",revprefix);   

    for(i=0; prefix[i]!='\0'; i++){
        ch=prefix[i];
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
    printf("\nYour Prefix Evalution:%d",ans); 
}