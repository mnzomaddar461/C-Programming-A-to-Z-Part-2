#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float gpa;
    printf("Enter The Marks (out of 100): \n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];  // Adding marks to total
    }

    // GPA calculation
    gpa = (float)total / 5;  

    // Check if GPA is valid and display corresponding grade
    if (gpa > 100 || gpa < 0) {
        printf("Invalid Result\n");
    } else if (gpa >= 90) 
    {
        printf("Your Result Is GPA 'A+'\n");
    } else if (gpa >= 80) 
    {
        printf("Your Result Is GPA 'A'\n");
    } else if (gpa >= 70) 
    {
        printf("Your Result Is GPA 'A-'\n");
    } 
    else if (gpa >= 60) 
    {
        printf("Your Result Is GPA 'B'\n");
    } 
    else if (gpa >= 50) 
    {
        printf("Your Result Is GPA 'C'\n");
    } 
    else if (gpa >= 40)
    {
        printf("Your Result Is GPA 'D'\n");
    } else {
        printf("Your Result Is GPA 'F'\n");
    }
    printf("Total Marks: %d out of 500\n", total);

    return 0;
}
