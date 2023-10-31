#include<stdio.h>

int main(){

    //intializing array dimensions
    int n=5,p=3,q=4;

    //declaring arrays
    double A[n][p];
    double B[p][q];
    double C[n][q];

    //declaring looping variables
    int i,j;

    //initializing matrix A
    for (i=0;i<n;i++){
        for(j=0;j<p;j++){
            A[i][j]=i+j;
        }
    }

    //initializing matrix B
    for (i=0;i<p;i++){
        for(j=0;j<q;j++){
            B[i][j]=i-j;
        }
    }

    //initializing matrix C with 0 initially
    for (i=0;i<n;i++){
        for(j=0;j<q;j++){
            C[i][j]=0.0;
        }
    }

    //priting array A
    printf("Matrix A is :\n");
    for (i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("%3.0lf ",A[i][j]);
        }
        printf("\n");
    }

    //priting array B
    printf("Matrix B is :\n");
    for (i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%3.0lf ",B[i][j]);
        }
        printf("\n");
    }

    //performing matrix multiplication

    matmult(n,p,q,A,B,C);

    //printing matrix multiplication
    printf("Matrix multiplication is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            printf("%3.0lf ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}