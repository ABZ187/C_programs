// calculate mean variance and standard deviation
#include<stdio.h>
#include<math.h>
void main(){
    float arr[10],mean=0, var=0,sdev=0;
    int n;
    register int i;
    printf("Enter the no. of values you want to enter (<=10)\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the values \n");
        scanf("%f",&arr[i]);
    }
    // mean
    for(i=0;i<n;i++){
        // printf("mean %f")
        mean=mean+arr[i];
    }
    mean=mean/n;
    // variance
    for(i=0;i<n;i++){
        var=var+pow((arr[i]-mean),2);
    }
    var=var/2;
    sdev=pow(var,0.5);
    printf("Mean %3.2f\nVariance %3.2f\nStandard deviation %3.2f",mean,var,sdev);
    }