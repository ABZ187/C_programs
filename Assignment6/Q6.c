// print the pattern
#include<stdio.h>
void main(){
    int n=1,m,f;
    for(m=1;m<5;m++){
        for(f=1;f<=m;f++,n++){
            printf("%d ",n);
        }
        printf("\n");
    }
}
