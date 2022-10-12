#include<stdio.h>
int main(){
    float a;
    printf("Enter a value\n"); 
    scanf("%f",&a);
    if (a>=0){                    // { } not required if only one statement in if
        printf("Positive value");
    }

    else{                           // else is not mandatory after after if
        printf("Non-Negative value");
    }

    return 0;
}