#include<stdio.h>
int main (){
int choice,Celsius,fahrenheit;
float convartTamp;
printf("Choice Input Manu ");
printf("\nCelsius To Fahrenheit Prss '1'");
printf("\nFahrenheit to Celsius Prss '2'");
printf("\nPress Hear: ");
scanf("%d",&choice);
switch (choice)
{
case 1:
    printf("\n'Celsius To Fahrenheit' input Celsius value: ");
    /* Fahrenheit=(Celsius× 9/5)+32 */
    scanf("%lf",&Celsius);
    convartTamp =(Celsius*9/5)+32;
    printf("%d C Convart Temperature Is %.2lf F",Celsius,convartTamp);
    break;
case 2:
    printf("\n'Fahrenheit to Celsius' input Celsius value: ");
    /* Fahrenheit=(Celsius× 9/5)+32 */
    scanf("%lf",&fahrenheit);
    convartTamp =(fahrenheit - 32) * 5 / 9;
    printf("%d F Convart Temperature Is %.2lf C",fahrenheit,convartTamp);
    break;

default:
printf ("Sorry Your Input Don't Massing ");
    break;
}
    return 0; 
}
/*

#include<stdio.h>

int main () {
    int choice;
    int celsius, fahrenheit;
    float convertedTemp;

    printf("Choice Input Menu");
    printf("\n1. Celsius to Fahrenheit");
    printf("\n2. Fahrenheit to Celsius");
    printf("\nPress your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n'Celsius to Fahrenheit' - input Celsius value: ");
            // Formula: Fahrenheit = (Celsius × 9/5) + 32
            scanf("%d", &celsius);
            convertedTemp = (celsius * 9.0 / 5.0) + 32;
            printf("%d°C converted to Fahrenheit is %.2f°F\n", celsius, convertedTemp);
            break;

        case 2:
            printf("\n'Fahrenheit to Celsius' - input Fahrenheit value: ");
            // Formula: Celsius = (Fahrenheit - 32) * 5/9
            scanf("%d", &fahrenheit);
            convertedTemp = (fahrenheit - 32) * 5.0 / 9.0;
            printf("%d°F converted to Celsius is %.2f°C\n", fahrenheit, convertedTemp);
            break;

        default:
            printf("Sorry, your input doesn't match any option.\n");
            break;
    }

    return 0; 
}

*/