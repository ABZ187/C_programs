#include<stdio.h>
#include<stdlib.h>
#define n 10

int front=0, rear=-1;
// arr = address of array
// ele = element to enqueue
void enqueue(char *arr,int ele){
    if(rear<n){
        arr[++rear] = ele;
    }
    else{
        printf("\nQueue is full\n");
    }
}

void display(char *arr){
    int i;
    for(i = front;i<=rear;i++){
        printf("%d ",arr[i]);
    }
}

void dequeue(char *arr){
    int i;
    if(front<=rear){    
        front++;
    }
    else{
        printf("\nQueue is full\n");
    }
}

void isFull(char* arr){
    if(front>rear && rear>-1){
        printf("\nQueue is full\n");
    }
    else{
        printf("\nQueue is not full\n");
    }
}
void isEmpty(char* arr){
    if(rear==-1){
        printf("\nQueue is empty\n");
    }
    else{
        printf("\nQueue is not empty\n");
    }
}
int main(){
    char queue[n];
    int input,m;
    while(1){
        printf("\nChose an option\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.is Full\n5.is Empty\n6.Exit\n");
        scanf("%d",&input);
        switch(input){
            case 1:
                printf("Enter a value to enqueue\n");
                scanf("%d",&m);
                enqueue(queue,m);
                break;          
            case 2:
                dequeue(queue);
                break;
            case 3:
                display(queue);
                break;
            case 4:
                isFull(queue);
                break;
            case 5:
                isEmpty(queue);
                break;
            case 6:
                exit(0);
        }
    }
    return 0;
}