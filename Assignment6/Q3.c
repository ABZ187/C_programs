// Check the given number is positive negative or zero.

#include<stdio.h>
void main(){
    int n;
    printf("\nEnter a number. ");
    scanf("%d",&n);
    if (n>0){
        n=1;
    }
    else if (n<0){
        n=-1;
    }
    switch(n){
        case 0:
        printf("\nIts Zero");
        break;
        case 1:
        printf("\nIts Positive");
        break;
        case -1:
        printf("\nIts negative");
        break;
    }
}