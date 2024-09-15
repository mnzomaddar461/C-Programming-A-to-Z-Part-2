#include<stdio.h>
int main (){

int num; 
printf("Enter Between 0 to 10 Number:");
scanf("%d",&num);

switch (num)
{
    case 0:
    printf("This Number In 'Zero'");
    break;
    case 1:
    printf("This Number In 'One'");
    break;
    case 2:
    printf("This Number In 'Two'");
    break;
    case 3:
    printf("This Number In 'Three'");
    break;
    case 4:
    printf("This Number In 'Four'");
    break;
    case 5:
    printf("This Number In 'Five'");
    break;
    case 6:
    printf("This Number In 'Six'");
    break;
    case 7:
    printf("This Number In 'Seven'");
    break;
    case 8:
    printf("This Number In 'Eight'");
    break;
    case 9:
    printf("This Number In 'Nine'");
    break;
    case 10:
    printf("This Number In 'Ten'");
    break;
default:
 printf ("This Number is not Valide");
    break;
}

    return 0; 
}