#include <stdio.h>

int main(void)
{
int farenheit;
float celcius;

printf("enter farenheit: ");
scanf("%d", &farenheit);

// The math must happen AFTER the user provides the number
celcius = (farenheit - 32) / 1.8;

printf("farenheit: %d\n", farenheit);
printf("celcius: %.2f\n", celcius);

}
