#include<stdio.h>
void main(){
int m ,n ,p ,j,f,i;

//===== Hard coded matrix a and b

// int m = 3,n = 2,p = 3;
// float b[2][3] = {
//     {1,0,0},
//     {0,1,0}
// };
// float a[3][2] = {{1,1},
//             {1,1},
//             {2,1}};


//====== user input for A and B

printf("Matrix multiplication A x B \nEnter number of rows of matrix A\n");
scanf("%d",&m);
printf("Enter number of column of matrix A\n");
scanf("%d",&n);
printf("Enter number of row of matrix B\n");
scanf("%d",&n);
printf("Enter number of column of matrix B\n");
scanf("%d",&p);

float  a[m][n],b[n][p];
float c[m][p];

for (i = 0; i < m; i++){
    for (j = 0;j < n;j++){
        printf("Enter elements of %d row and %d column of matrix A\n",i+1,j+1);
        scanf("%f",&a[i][j]);
}
}

for (i = 0; i < n; i++){
    for (j = 0;j < p; j++){
        printf("Enter elements of %d row and %d column of matrix B\n",i+1,j+1);
        scanf("%f",&b[i][j]);
}
}


//====== initialize matrix C to zero matrix

for (j = 0; j < n; j++){
    for (i = 0;i < m;i++){
    c[i][j] = 0;
}
}

// ======= Calculating AxB

for (j = 0; j < m; j++){
    for (i = 0;i < p;i++){
        for (f = 0;f < p;f++){
            // c[i][f] = c[i][f] + a[i][j] * b[j][f];
            c[j][f] = c[j][f] + a[j][i] * b[i][f];

}
}
}

// ======= Print A
printf("\nA\n");
for (i = 0; i < m; i++){
    for (j = 0;j < n; j++){
        printf("%8.1f",a[i][j]);
}
printf("\n");
}

// ======= Print B

printf("\nB\n");

for (i = 0; i < n; i++){
    for (j = 0;j < p; j++){
        printf("%8.1f",b[i][j]);
}
printf("\n");
}

// ======= Print AxB

printf("\nAxB\n");

for (i = 0; i < m; i++){
    for (j = 0;j < p; j++){
        printf("%8.1f",c[i][j]);
}
printf("\n");
}


}
