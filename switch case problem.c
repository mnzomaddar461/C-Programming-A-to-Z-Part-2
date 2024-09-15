#include<stdio.h>
int main (){
int mark;
printf("Enter Your Mark Between 0 to 100 : ");
scanf("%d",&mark);
switch (1) // 1 manes Bool 'True'
{
case 1:
    if (mark>=80 && mark<=100)
    {
    printf("Your Grad Is A+ \n");
    break;
    }
case 2:
    if (mark>=70 && mark<=80)
    {
    printf("Your Grad Is A \n");
    break;
    }
case 3:
    if (mark>=60 && mark<=70)
    {
    printf("Your Grad Is A- \n");
    break;
    }
case 4:
    if (mark>=50 && mark<=60)
    {
    printf("Your Grad Is B \n");
    break;
    }
case 5:
    if (mark>=40 && mark<=50)
    {
    printf("Your Grad Is C \n");
    break;
    }
case 6:
    if (mark>=33 && mark<=40)
    {
    printf("Your Grad Is D \n");
    break;
    }

default:
    if (mark>=0 && mark<32)
    {
    printf("Your Grad Is F \n");
    break;
    }
else
{
  printf("Invalid marks entered.\n");
}
    break;
}

    return 0 ;
}

//Same Code But Diffrent Way Using "Switch case"
/*
#include<stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0 to 100): ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100) {
        printf("Your grade is A+.\n");
    } 
    else if (marks >= 70 && marks < 80) {
        printf("Your grade is A.\n");
    } 
    else if (marks >= 60 && marks < 70) {
        printf("Your grade is A-.\n");
    } 
    else if (marks >= 50 && marks < 60) {
        printf("Your grade is B.\n");
    } 
    else if (marks >= 40 && marks < 50) {
        printf("Your grade is C.\n");
    } 
    else if (marks >= 33 && marks < 40) {
        printf("Your grade is D.\n");
    } 
    else if (marks >= 0 && marks < 33) {
        printf("Your grade is F.\n");
    } 
    else {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
    }

    return 0;
}



*/