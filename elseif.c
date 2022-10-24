#include<stdio.h>
int main(){
    char b,a;
    printf("Enter 'y' if you have passed maths exam else enter 'n'\n");
    scanf("%c",&a);
    printf("Enter 'y' if you have passed science exam else enter 'n' \n");
    scanf("\n%c",&b);   // notice the '/n' before format specifier of second scanf 
    if (a=='y' && b=='y')
        printf("You are being Rs.45 for passing in maths and science exams.");
    else if(a=='y')
        printf("You are being Rs.15 for passing in maths exam.");
    else if(b=='y')
        printf("You are being Rs.15 for passing in science exam.");
    else if (a=='n' && b=='n')
        printf("You need to work harder");
    else 
        printf("Enter values properly");
    return 0;

}