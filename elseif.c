#include<stdio.h>
int main(){
    char b,a;
    printf("Enter 'y' if you have passed maths exam else enter 'n'\n ");
    scanf("%c\n",&a);
    printf("Enter 'y' if you have passed science exam else enter 'n' ");
    scanf("%c",&b);
    // if (a=='y' && b=='y')
    //     printf("\nYou are being Rs.45 for passing in maths and science exams.");
    // else if(a=='y')
    //     printf("\nYou are being Rs.15 for passing in maths exam.");
    // else if(b=='y')
    //     printf("You are being Rs.15 for passing in science exam.");
    // else if (a=='n' && b=='n')
    //     printf("\nYou need to work harder");
    // else 
    //     printf("\nEnter values properly");

    printf("%c%c",a,b);
    return 0;

}