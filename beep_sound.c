#include<stdio.h>
#include <windows.h>
int main(){
    printf("\a"); // for linux and older Windows version
    Beep(750, 300);  // for Windows 10 and above
    return 0 ;
}