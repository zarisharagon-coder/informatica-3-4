#include <stdio.h>

int main(void)
{
    int Mvt;
    int Hr;
    int Min;
    printf("what is you starting time");
    scanf("%d:%d", &Hr, &Min);
   printf("how long is the movie?");
    scanf("%d", &Mvt);
   int Fhr= Hr+(Mvt%60);
    printf("your finish time is: %d:",Hr);
}
