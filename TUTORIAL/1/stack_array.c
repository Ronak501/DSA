#include<stdio.h>
int i,x,a[50],position,n;
void insert()
{
    printf("Enter at which position you want to insert element: ");
    scanf("%d",&position);

    printf("Enter element you want to insert: ");
    scanf("%d",&x);

    for(i=n;i>position;i--)
    {
        a[i]=a[i-1];
    }
    a[position]=x;
    n++;
}
void delete()
{
    printf("Enter at which position you want to delete element: ");
    scanf("%d",&position);

    for(i=position;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void display()
{
    printf("Array is:");
    for(i=0;i<n;i++)
    {
      printf(" %d",a[i]);  
    }
}
void search()
{
    int x;

    printf("Enter you want to search element: ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(a[i]==x)
        {
            printf("Element found at position: %d",i);
            break;
        }   
    }    
}

void max(){
    int max = 0;

    for(i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    printf("Maximum element is: %d", max);
}

void main()
{
    int choice;
    printf("Enter total number of elements :");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    do
    {
        printf("\n**********************************");
        printf("\n1.Insert \n2.Delete \n3.Display\n4.Search\n5.Max");
        printf("\n**********************************");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3: 
                display();
                break;
            case 4:
                search();
                break;
            case 5:
                max();
                break;
        }
    }while (choice!=0);
}