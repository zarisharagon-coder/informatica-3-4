#include <stdio.h>
// 1. Prototype
void c_to_f(void);//celsius to fahrenheit
void f_to_c(void);//fahrenheit to celsius
int main(void)

{
printf("temp converter \n");
printf("1. celsius to fahrenheit \n");
printf("2. fahrenheit to celsius \n");
printf("enter your option:");
int user_response;
scanf("%d", &user_response);
if (user_response==1){
    //3.call
c_to_f();
}else if (user_response == 2){
    f_to_c();
}else{
    printf("Invalid option \n");


}


}


//2. Define
void c_to_f(void){
float fahrenheit, celsius;
printf("enter temperature in celsius: \n");
scanf("%f" , &celsius);
fahrenheit = (celsius * 1.8) + 32 ;
printf("fahrenheit: %.2f \n", fahrenheit);
//-40f = -40c
}

void f_to_c(void)
{
float fahrenheit, celsius;
printf("enter temperature in fahrenheit: \n");
scanf("%f" , &fahrenheit);
celsius = (fahrenheit - 32) / 1.8;
printf("celsius: %.2f \n", celsius);
}
