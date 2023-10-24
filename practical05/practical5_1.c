#include<stdio.h>
//To use exit function
#include<stdlib.h>

//Function declaration
//input arguments Fn-1 and fn-2 respectively
//On exit: Fn and Fn-1
void fibonacci(int *a, int *b);
int main(){
    int n,i;

    //Initializing first two values in the series as 0 and 1 respectively
    int f0=0,f1=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n<1){
        printf("The number is not positive.\n");
        //exit terminates execution when it is called.
        //Checking if the entered value is positive or not
        exit(1);
    }

    //Printing fibonacci sequence
    printf("The fibonacci sequence is \n");
    printf("%d , %d ,", f0,f1);

    //Calculating fibonacci sequence from 3 and calling fibonacci function
    for(i=3;i<=n;i++){
    fibonacci(&f1,&f0);
    printf("%d , ",f1);

    if((i+1)%10==0)
        printf("\n");
    }
    return 0;
    
    

}
void fibonacci(int *a, int *b){
    int sum;
    
        //*a= Fn-1 ,*b=Fn-2 and sum=Fn 
        sum= *a + *b;
        //*a= Fn and *b= Fn-1
        *b = *a;
        *a = sum;
    
}