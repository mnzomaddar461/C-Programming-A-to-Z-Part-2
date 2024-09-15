/* 
Bitwise AND &
Bitwise OR |
Biteise EXOR ^
Bitwise Right Shift >>
Bitwise Left Shift <<
Bitwise NOT ~
*/

#include<stdio.h>

int main (){

int num1,num2,result;
printf("Enter Number One: ");
scanf("%d",&num1);
printf("Enter Number Two: ");
scanf("%d",&num2);

result = num1&num2;
printf("\nThe Resul Bitwise AND Is %d ");
result = num1|num2;
printf("\nThe Resul Bitwise OR Is %d ");
result = num1^num2;
printf("\nThe Resul Bitwise EXOR Is %d ");
result = num1>>num2;
printf("\nThe Resul Bitwise Right Shift Is %d ");
result = num1<<num2;
printf("\n Resul Bitwise Left Shift Is %d ");
    return 0 ; 
}