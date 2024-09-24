#include<stdio.h>
int n;

void ispop(int a[], int n){
    int i,index,x;

    printf("Enter the value of index:");
    scanf("%d",&index);

    for ( i = 0; i > n; i++)
    {
        if(i>=index){
            a[i]=a[i+1];
        }
    }
    n=n-1;
    isdis(a,n);
}

void ispush(int a[], int n){
    int i,index,x;

    printf("Enter the value of index:");
    scanf("%d",&index);

    for ( i = n+1; i > index; i--)
    {
        a[i]=a[i-1];
    }
    printf("Enter the value of element:");
    scanf("%d",&x);
    a[index]=x;
    n=n+1;
    isdis(a,n);
}

int ischange(int a[], int n){
    int i,index,x;

    printf("Enter the value of index:");
    scanf("%d",&index);

    for ( i = 0; i < n; i++)
    {
        if(i==index){
            printf("Enter the value of element:");
            scanf("%d",&x);
            a[i]=x;
        }
    }
    isdis(a,n);
}

int isdis(int a[],int n){

    int j;

    printf("Each value of array:");

    for ( j = 0; j < n; j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}

void main(){
    int a[50],i,x,j,b;

    printf("Enter the value of number of element:");
    scanf("%d",&n);

    printf("Enter the value of element:");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x);
        a[i]= x;
    }

    isdis(a,n);

    printf("\n******************************************************************");
    printf("\n1.Change");
    printf("\n2.Display");
    printf("\n3.Insert");
    printf("\n4.Delete");
    printf("\n******************************************************************"); 

    printf("\nEnter the value:");
    scanf("%d",&b);

    switch(b)
    {
    case 1:
        ischange(a,n);
        break;

    case 2:
        isdis(a,n);
        break;

    case 3:
        ispush(a,n);
        break;    

    case 4:
        ispop(a,n);
        break;   
    
    default:
        printf("Your Value is Not Match");
        break;
    }
}