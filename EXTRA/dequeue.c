#include <stdio.h>   
#include <stdlib.h>

#define size 5  
int deque[size];    
int f, r;

void create()    
{    
    f=r=-1;    
}

void insert_front(int x)    
{    
    if((f==0 && r==size-1) || (f==r+1))    
    {    
        printf("Overflow");    
    }    
    else if((f==-1) && (r==-1))    
    {    
        f=r=0;    
        deque[f]=x;    
    }    
    else if(f==0)    
    {    
        f=size-1;    
        deque[f]=x;    
    }    
    else    
    {    
        f=f-1;    
        deque[f]=x;    
    }    
}    
    
void insert_rear(int x)    
{    
    if((f==0 && r==size-1) || (f==r+1))    
    {    
        printf("Overflow");    
    }    
    else if((f==-1) && (r==-1))    
    {    
        r=0;    
        deque[r]=x;    
    }    
    else if(r==size-1)    
    {    
        r=0;    
        deque[r]=x;    
    }    
    else    
    {    
        r++;    
        deque[r]=x;    
    }    
    
}    
    
void display()    
{    
    int i=f;    
    printf("\nElements in a deque are: ");    
        
    while(i!=r)    
    {    
        printf("%d ",deque[i]);    
        i=(i+1)%size;    
    }    
     printf("%d",deque[r]);    
}    
    
void getfront()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at front is: %d", deque[f]);    
    }    
        
}    
    
void getrear()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at rear is %d", deque[r]);    
    }    
        
}    
    
void delete_front()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(f==r)    
    {    
        printf("\nThe deleted element is %d", deque[f]);    
        f=-1;    
        r=-1;    
            
    }    
     else if(f==(size-1))    
     {    
         printf("\nThe deleted element is %d", deque[f]);    
         f=0;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[f]);    
          f=f+1;    
     }    
}    
    
void delete_rear()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(f==r)    
    {    
        printf("\nThe deleted element is %d", deque[r]);    
        f=-1;    
        r=-1;    
            
    }    
     else if(r==0)    
     {    
         printf("\nThe deleted element is %d", deque[r]);    
         r=size-1;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[r]);    
          r=r-1;    
     }    
}    
    
void main()    
{    
    int n, ch;
 
    printf("1 - Insert an element into queue Front Side");
    printf("\n2 - Insert an element into queue End Side");
    printf("\n3 - Delete an element from queue Front Side");
    printf("\n4 - Delete an element from queue End Side");
    printf("\n5 - Display Front Side queue elements");
    printf("\n6 - Display End Side queue elements");
    printf("\n7 - Display queue elements");
    printf("\n8 - Exit");
 
    create();
 
    while (1)
    {
        printf("\nEnter your choice : ");    
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1: 
            printf("Enter value to be inserted : ");
            scanf("%d",&n);
            insert_front(n);
            break;

        case 2: 
            printf("Enter value to be inserted : ");
            scanf("%d",&n);
            insert_rear(n);
            break;

        case 3:
            delete_front();
            break;

        case 4:
            delete_rear();
            break;

        case 5: 
            getfront();
            break;

        case 6:
            getrear();
            break;

        case 7: 
            display();
            break;

        case 8: 
            exit(0);

        default: 
            printf("\nChoice is incorrect, Enter a correct choice");
        }
    }
}   