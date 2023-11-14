#include<stdio.h>

//recursive function
int recursive(int a, int b){

    //base condition - returns a if b is 0
    if(b==0)
        return a;
    //recursively calls the function with first argument b and second argument
    //as the mod of a and b
     return recursive(b,a%b);
}

int iterative(int a, int b){

    //dummy variable to store values
    int temp;
    while (b>0){

        //storing value of a in temp, and then replacing a's value with
        //b and b's value with mod of a and b
        temp=a;
        a=b;
        b=temp%b;
    }
    // returning a's value
    return a;
}



int main(void){

    printf("Enter two integers\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The gcd using iterative is %d\n", iterative(a,b));
    printf("The gcd using recursive is %d\n", recursive(a,b));
    return 0;
}
