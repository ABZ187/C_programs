#include<stdio.h>
int main(){
    float a=13.223223;
    int b=0;
    char ch='z';
    printf("format speciers %16.4f\n",a);  // use space of 16 letters to print and print accuracy till 4 digits after point
    printf("format speciers %d\n",b); // print int
    printf("format speciers %c\n",ch); // print char
    return 0;
}