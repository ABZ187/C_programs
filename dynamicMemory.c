#include<stdio.h>
#include<stdlib.h>
int main(){
    int m1,m2,i;
//Malloc
    printf("Enter m1\n");
    scanf("%d",&m1);
    // malloc returns void pointer, typecast it.
    // malloc returns array with garbage values
    int *m = (int*) malloc(m1*sizeof(int)); 
    for(i=0;i<m1;i++){
        printf("enter %dth element of m1\n",i);
        scanf("%d",(m+i));
    }
    for(i=0;i<m1;i++){
        printf("%d ",*(m+i));
    }

//Calloc 
    printf("\nEnter m2\n");
    scanf("%d",&m2);
    // calloc return array with zeros
    int *c = calloc(m2,sizeof(int));
        for(i=0;i<m2;i++){
            printf("enter %dth element of m2\n",i);
            scanf("%d",(c+i));
    }
    for(i=0;i<m2;i++){
        printf("%d ",*(c+i));
    }

    return 0;
}
