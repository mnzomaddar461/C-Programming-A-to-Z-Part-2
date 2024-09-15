#include<stdio.h>

int main (){

int num1, num2, num3;
printf ("Enter Ther are 3 Number: ");
scanf ("%d %d %d",&num1,&num2,&num3);

if (num1>=num2 && num1>=num3)
{
    printf("The Learg  Number Is %d",num1);
}

else if (num2>=num1 && num2>=num3)
{
    printf ("The Learg Number Is %d",num2);
}

else if (num3>=num1 && num3>num2)
{
    printf ("The Learg Number Is %d",num3);
}

else {
    printf("The Number Equle");
}


    return 0 ;
}