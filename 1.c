//bisection convergence =1(linear)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float t_val,a_val,abs_err,rev_err,per_err;

printf("Enter the true value: ");
scanf("%f",&t_val);

printf("Enter the approximate value : ");
scanf("%f",&a_val);

abs_err = fabs(t_val - a_val);
rev_err = abs_err/t_val;
per_err = rev_err * 100;

printf("Shikhar Dhyani \nSec-A  20011281\n\n****************************************************\n");
printf("Absolute Error : %f\n" , abs_err);
printf("Relative Error : %f\n" , rev_err);
printf("Percentage Error : %f\n" , per_err);


return 0 ;
}

//inherent error :pehle se majood ho jo machine me.
//truncate :chop the remaining values.
//roundoff error

//absolute error , relative error ,percentage error (percentage relative error)

//absolute error= |true value - approx value|
//relative error= absolute error/ true value
// % error = relative error *100


