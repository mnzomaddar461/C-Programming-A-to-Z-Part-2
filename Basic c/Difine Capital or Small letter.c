#include<stdio.h>
int main (){

char ch;
printf ("Enter a Letter in English: ");
scanf("%c",&ch);

if (ch>='A' && ch<='Z')
{
   printf("The Letter Is Capital");
}

else if (ch>='a' && ch<='z')
{
    printf("The Letter Is Small");
}
else
{
    printf("Un Difine Letter");
}
    return 0;
}