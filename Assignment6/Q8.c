// Write a program to count multiples of 3 till the user enters 'n'

#include<stdio.h>
void main(){
    int a,f=0;
    char c;
    while(1){
        printf("\nEnter a number ");
        scanf("%d",&a);
        if(a%3==0){
            f++;
        }
        printf("Do you want to continue entering numbers y/n ");
        scanf("\n%c",&c);
        if (c=='n'){
            break;
        }
        }
        printf("Multiples of 3 were entered %d times ",f);
}