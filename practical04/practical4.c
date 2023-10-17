#include <stdio.h>
#include <math.h>

//Declaring global variable
int N=12;

//Declaring array as global varibale
double arr[13];

//Declaring the funtions
//Funtion to convert degree to radians
double radians(double deg);
//Function to calculate area using trapezoidal rule
double traprule(int N);




int main(){

    int i=0;
    double deg,rad;

    //Running a loop from 0 to 12 and coverting degrees at an interval of 5 to radians and
    //storing the results to array
    for(i=0;i<=N;i++){

        deg= i*5.0;
        rad= radians(deg);
        arr[i]=tan(rad);

    }

    //Finding approximate value using trapezoidal rule
    double approx= traprule(N);

    //Finding exact value which is log(2.0)
    double exact= log(2.0);

    //Comparing exact and approximate value
    printf("Your approximation of the integral from x=0 to x=60 degrees of the function tan(x) with respect to x is: \n%.5f\nThe exact solution is : \n%.5f\n", approx,exact);

}

//Defining radians funtion to convert degrees to radians
double radians(double angle){

    return( (M_PI * angle)/180.0 );
}

//Defining traprul function to calculate area using trapezoidal rule
double traprule(int N){

    //Initializing area as the sum of first and last term
    double width,area= arr[0]+arr[N];
    int i=0;

    //Adding the twice of middle terms to area variable
    for(i=1;i<N;i++){
        area+= 2.0*arr[i];
    }

    //Adding b-a/2N to area
    width = radians(60.0-0)/(2.0*N);
    area= width*area;
    return area;
}
