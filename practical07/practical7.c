//Using taylor series for e^x

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Function to return factorial
int factorial(int n);

int factorial(int n){

        //error handling for negative numbers
        if(n<0){

            printf("negative number entered");
            return -1;
        }

        //Base codition for factorial
        else if (n==0)
        {
            return 1;
        }
        //recursive call to compute factorial
        else
            return n*factorial(n-1);
}
int main(void){

    int i,order;
    //term array declared as pointers
    double e=1.0, *term;

    //Entering order
    printf("Enter required polynomial order\n");
    if(scanf("%d",&order)!=1){
        printf("Didn't enter a number\n");
        return -1;
    }
    
    //Allocating memory to term array dynamically depending on the value
    //of the order variable.
    term= (double *)malloc(order*sizeof(double));

    //filling array elements
    for(i=0;i<order;i++){
        term[i]=1.0/(double)factorial(i+1);\
        //Adding terms
        e+=term[i];
    }

    printf("The estimated value of e^%d using Taylor series is %lf\n",order,e);
    printf("Actual value of e^15 is %lf\n", exp(1));
    printf("The difference between estimated and actual values is %lf\n",e-exp(1));

    //freeing allocated memory
    free(term);
    return 0;
}
//With higher order, difference becomes infinity because of integer overflow.