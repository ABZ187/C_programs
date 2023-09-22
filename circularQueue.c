#include<stdio.h>
#include<stdlib.h>
#define n 5
int front=-1,rear=-1;

void enqueue(char *arr,char ele){
    if((rear+1)%n == front%n){
        printf("\nQueue is full\n");
    }
    else{
        arr[++rear%n] = ele;
    }
}

void dequeue(char *arr){
    if(front%n == rear%n){
        printf("Queue is empty\n");
    }
    else{
        if(front==-1){
            front++;
        }
        printf("Removed %d\n",arr[(front++)%n]);
    }
}

void display(char *arr){
    int i = front%n, j = front%n, m=0;
    if(front==-1){
        i = front + 1;
        j = front + 1;
    }

    for(;m<abs(j-rear);m++){
        printf(" %d \n",arr[i]);
        i = (i+1)%n;
    }
    printf(" %d \n",arr[i]);
}


int main(){
    char queue[n];
    int j,input;
    while(1){
        printf("\nChoose an option\n1.Enqueue\n2.Dequeue\n3.Display\n");
        scanf("%d",&input);
        switch (input){
            case 1:
                printf("Enter element to enquue\n");
                scanf("%d",&j);
                enqueue(queue,j);
    printf("front %d rear %d", front, rear);

                break;
            case 2:
                dequeue(queue);
    printf("front %d rear %d", front, rear);
                break;
            case 3:
                display(queue);
    printf("front %d rear %d", front, rear);
                break;
        }
    }
}