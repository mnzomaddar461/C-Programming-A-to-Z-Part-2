#include<stdio.h>
int main (){

int marks[5],total=0;
float gpa;
printf("Enter The Mark (out of 100): \n");
// Using loop 'for'
for (int i = 0; i <5; i++)
{
    printf ("Subject 1:",i+1);
    scanf ("%d",&marks[i]);
    total +=marks[i];
}
gpa=total/500*5;
if (gpa>100 || gpa<0)
{
    printf ("Invalid Result");
}
else if ( gpa==499)
{
    printf ("Your Result GPA Is 'A+'");
}
else if (gpa<=450 && gpa>=400)
{
    printf ("Your Result Is GPA 'A'");
}
else if (gpa<=399 && gpa>=350)
{
    printf ("Your Result Is GPA 'A-'");
}
else if (gpa<=349 && gpa>=200)
{
    printf ("Your Result Is GPA 'B'");
}
else if (gpa<=199 && gpa>=150)
{
    printf ("Your Result Is GPA 'C'");
}
else if (gpa<=149 && gpa>=100)
{
    printf ("Your Result Is GPA 'D'");
}
else 
{
    printf ("Your Result Is GPA 'F'");
}
printf("\n Total Marks %d Out of 500",total);

    return 0 ;
}