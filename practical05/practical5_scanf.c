#include <stdio.h> 

//Using scanf to take input from user and printing the same.
int main(void) {
    int i,ierr; 
    double a;
    // Enter information from user
    printf("Enter an int and double\n");
    //scanf returns number of arguments read
    ierr=scanf("%d %lf",&i,&a);
    if(ierr!=2){
        printf("Problem with input");
        return 0;
    }
    printf("Value of int and double is %d and %.2lf repectively", i,a);
    return 0;
  }