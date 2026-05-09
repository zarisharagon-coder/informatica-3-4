#include <stdio.h>

int main(void)
{
int celcius;
float farenheit;

printf("enter celcius: ");
scanf("%d", &celcius);

// The math must happen AFTER the user provides the number
farenheit = (celcius *1.8) +32;

printf("celcius: %d\n", celcius);
  printf("%.0f°F = %.2f°C",farenheit, celcius);
if (celcius==farenheit){
printf("Normal weather")}
else if(celcius<10);{
printf(" cold weather")}
else if(celcius<20);{
printf("chilly weather")

}

}
