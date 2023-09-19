#include<stdio.h>
#include<string.h>
int minJumps(int*,int);
int main(){
    int arr[] = {100,-23,-23,404,100,23,23,23,3,404};
    // int arr[] = {100,-23,100};
    int m;
    m=minJumps(arr,10);
    return 0;
}
int minJumps(int* arr, int arrSize){
    int arr2[2*arrSize];
    int arr3[arrSize][2*arrSize];
    int i,j,m,n,p;
    //remove -1 from arr
    for(i=0;i<arrSize;i++){
        if(arr[i]==-1){
            arr[i]+1;
        }
    }
    // //initialize arr2 with -1
    // for(i=0;i<arrSize;i++){
    //     for(j=0;j<arrSize;j++){
    //         arr2[i][j]=-1;
    // }
    // }
    memset(arr2,-1,sizeof arr2);
    memset(arr3,-1,sizeof arr3);
    int d=0;
    for(i=0;i<arrSize;i++){
        n=0;
        if(arr[i]!=-1){
            p=arr[i];
            for(j=i;j<arrSize;j++){
                if(p==arr[j]){
                    arr2[d]=j;
                    arr[j]=-1;
                    n++;
                    d++;
                }
            }
            if(n!=0){
                arr2[d]=-1;
                d++;
        }
        }

        }
    for(i=0;i<2*arrSize;i++){
        printf("%3d ",arr2[i]);
    }
    printf("\n");
    // for(i=0;i<arrSize;i++){
    //     for(j=0;j<2*arrSize;j++){
    //         if(arr2[i][j]!=-1){
    //             arr3[i][j]=arr2[i][j];
    //             }   
    //     }
    // }

    return 0;
    }