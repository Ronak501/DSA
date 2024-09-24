#include <stdio.h>
#include <stdlib.h>

void main(){

    int i,choice,queue[5],front=0,rear=0,size=5;
    while(1){

        printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if(front==5){
                    printf("QUEUE OVERFLOW\n");
                }
                else{
                    printf("Enter the element : ");
                    scanf("%d",&queue[rear]);
                    rear++;
                }
                break;

            case 2:
                if(front==rear){
                    printf("QUEUE UNDERFLOW\n");
                }
                else{
                    printf("Element deleted : %d\n",queue[front]);
                    for(i=front;i<rear-1;i++){
                        queue[i]=queue[i+1];
                    }
                    rear--;
                }
                break;  
            case 3:
                if(front==rear){        
                    printf("QUEUE IS EMPTY\n"); 
                }
                else{
                    for(i=front;i<rear;i++){
                        printf("%d ",queue[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("INVALID CHOICE\n");
        }
    }
}