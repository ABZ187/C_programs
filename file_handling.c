/*
1.File pointer
2.fgetc()
3.EOF : character which defines end of file
*/
#include<stdio.h>
void main(){
FILE *ptr;
char c;
char arr[30];
ptr = fopen("text.txt","r");
c=fgetc(ptr);
printf("Read first char : %c",c);
printf("\nRead second char : %c",c);
printf("\nRead first char : %c",c);
printf("\nRead second char : %c",c);
fgets(arr,5,ptr);
printf("\nRead string : %s",arr);
fclose(ptr);


ptr = fopen("text2.txt","w"); //will create file if not exists
fputc('k',ptr);
fputc('m',ptr);
fputc('n',ptr);
fputs("\nwrite",ptr);
fclose(ptr);

ptr = fopen("text2.txt","a"); //will create file if not exists
fputc('k',ptr);
fputc('m',ptr);
fputc('n',ptr);
fputs("\nappend",ptr);
fclose(ptr);

}