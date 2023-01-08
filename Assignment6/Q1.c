//Write a program to print leap years in a given range of year

#include<stdio.h>
void main(){
    int b,e;
    printf("Enter the beginning of the range\n");
    scanf("%d",&b);
    printf("Enter the ending of the range\n");
    scanf("%d",&e);
    while(b<=e){
        if (b%100==0){
            if(b%400==0){
                printf("\n%d is leap year",b);
            }
        }
        else if(b%4==0){
            printf("\n%d is leap year",b);
        }
        ++b;
    }
}