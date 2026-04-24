#include <stdio.h>

int main(void)
{
char name[50];
printf("Enter your name: ");
//the scanf is for the whatever this is to ask you your name
scanf("%s", &name);
printf("Hello %s! \n",name);

char color[50];
printf("enter your favorite color: ");
scanf("%s", &color);
printf("%s is the worst color ive ever heard of! \n",color );
}


