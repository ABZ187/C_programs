// Write a C program to find Grade of a student using switch case

#include<stdio.h>
void main(){
    int m,n;
    printf("Enter your marks in percentge\n");
    scanf("%d",&m);
    n=m/10;
    switch (n){
        case 10:
        printf("\nA Grade");
        break;
        case 9:
        printf("\nA Grade");
        break;
        case 8:
        printf("\nB Grade");
        break;
        case 7:
        printf("\nC Grade");
        break;
        case 6:
        printf("\nD Grade");
        break;
        case 5:
        printf("\nE Grade");
        break;
        case 4:
        printf("\nF Grade");
        break;
        default:
        printf("\nFailed");
    }

    }
