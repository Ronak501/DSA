#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

int isFull()
{
    return (rear + 1) % MAX_SIZE == front;
}

int isEmpty()
{
    return front == -1;
}

void enqueue(int data)
{
    if (isFull()) {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = data;
    printf("Element %d inserted\n", data);
}

int dequeue()
{
    if (isEmpty()) {
        printf("Queue underflow\n");
        return -1;
    }
    int data = queue[front];
    if (front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % MAX_SIZE;
    }
    return data;
}

void display()
{
    int i;
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }else{
        printf("Queue Elements: ");
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

void main(){
    int choice, x;

    while(1){

        printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter the element : ");
                scanf("%d",&x);
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;  

            case 4:
                exit(0);
                break;

            default:    
                printf("INVALID CHOICE\n");
        }   
    }
}