#include<stdio.h>
#include<math.h>
int main (){
double x=5.55,result;
printf("Enter a round NumBer : ");
scanf ("%lf",&x);
result= round(x);
printf(" The Result Is Round Number %lf= %lf",x,result);

    return 0 ;
}