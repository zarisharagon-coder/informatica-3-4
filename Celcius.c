#include <stdio.h>
int main(void)
{
    int farenheit;
    int celcius;
    printf("Enter the temperature in farenheit: ");
    scanf("%d", &farenheit);
    celcius =(farenheit-32)/1.8;
    printf("%.0f°F = %.2f°C",farenheit, celcius);
}
