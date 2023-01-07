// read the whole file
#include<stdio.h> 
void main(){
FILE *ptr;
char c;
char arr[30];
ptr = fopen("text.txt","r");
while(1){
    c=fgetc(ptr);
    if (c==EOF){
        break;
    }
    printf("%c",c);

}
fclose(ptr);

}
