#include <stdio.h>
#include <math.h>

int main(){

    //Declaring and initializing the variables( end points and number of points)
    double term=0.0,sum1=0.0,sum=0.0,res=0.0;
    int i=0;

    //Calculating sum of first and last term
    sum1=tan(0.0)+tan(M_PI/3.0);

    //no of equidistant points to be calculated
    int n=11;
    int N=12;

    //The factor by which each of the 11 terms is larger than the previous one
    float factor=(M_PI/3.0-0.0)/(double)N;
    
    //Loop to calculate the sum of the middle 11 terms
    for(i=1;i<12;i++){
        term=term+factor;
        sum=sum+2*tan(term);
    }

    //Adding the sum of middle 11 terms to the sum of first and the last term and multiplying it (b-a)/(2*n)

    res=sum+sum1;
    res=res*factor*0.5;

    //Comparing with log(2)

    printf("Answer of integral of tan from 0 to pie/3 is %.5f\nAnswer of  log(2) is %.5f \n",res,log(2));


    return 0;
}
