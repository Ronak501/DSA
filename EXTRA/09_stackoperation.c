#include<stdio.h>
#define size 5
int a[size],x,top=-1,c;

int isfull()
{
    if(top==size-1) return 1;
    else return 0;
}
int isempty()
{
    if(top==-1) return 1;
    else return 0;
}
void push(int x)
{
    if(isfull())
    {
        printf("\nArray is full!!");
    }
    else{
        top++;
        a[top]=x;
    }     
}
void peep()
{
    x=a[top];
    printf("The top value of array is: %d",x);
}
int pop()
{
    if(isempty()){
        printf("Array is empty.");}
    else{
        x=a[top];
        top--;
    }
}
void display()
{
    int i;
    if(!isempty()){
        printf("The Elements Of Array: ");
        for(i=top;i>=0;i--)
        {
            printf("%d ",a[i]);
        }
    }
}

void main()
{   
   do
   {
    printf("\nStack Operations:");
    printf("\n1.Push \n2.Peep \n3.Pop \n4.Display");
    printf("\nEnter your choice:");
    scanf("%d",&c);
    
    switch(c)
    {
        case 1:
            printf("\nEnter The value of Element:");
            scanf("%d",&x);
            push(x);
            break;
        case 2:
            peep();
            break;
        case 3:
            pop();
            break;
        case 4:
            display();
            break;
    }
   } while(c!=0);
}