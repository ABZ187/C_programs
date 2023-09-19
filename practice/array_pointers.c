#include<stdio.h>
int main(){
    int arr[][3][2]={{{000,001},{010,011},{020,021}},{{100,101}}};
    int (*ptr)[3][2];
    int a2[2][3][4]; //array of pointers
    // int *(*ptr2)[2][3][4]=a2;
    int (*ptr2)[3][4]=a2; // array pointer 
    printf("a2[2][3][4] %d\n(*ptr2)[3][4] %d\n",a2[2][3][4],(*ptr2)[3][4]);

}