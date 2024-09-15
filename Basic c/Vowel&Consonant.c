#include<stdio.h>
int main (){

char ch;
printf ("Enater a Charecter: ");
scanf("%c",&ch);

if (ch=='a')
{
    printf("%c Is Vowel");
}
else if (ch=='e')
{
    printf("%c Is Vowel");
}
else if (ch=='i')
{
    printf("%c Is Vowel");
}
else if (ch=='o')
{
    printf("%c Is Vowel");
}
else if (ch=='u')
{
    printf("%c Is Vowel");
}
else
{
    printf("%c is Consonant");
}
// same woork but diffrent way in using Logical oparetor like 'OR'
/*
if (ch == a || ch == u || ch == i || ch == o || ch == e)
    printf ("%c Is Vowel");

else 
{
printf ("%c Is Vowel");
}    
*/

    return 0;
}