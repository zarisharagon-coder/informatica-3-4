#include <stdio.h>

void add(void);
void subtract(void);
void multiply(void);
void divide(void);
int main(void)
{
printf("COOL calculator \n");
printf("1. add \n");
printf("2. subtract \n");
printf("3. multiply \n");
printf("4. divide \n");
printf("enter your option:");
int user_response;
scanf("%d", &user_response);

//call
if (user_response ==1){
add();
}else if (user_response == 2){
subtract();
}else if (user_response == 3){
multiply();
}else if (user_response == 4){
divide();

}else {
printf("invalid option \n");
}

}

void add(void){
float number1, number2;
float add;
printf("enter first number: \n");
scanf("%f" , &number1);
printf("enter second number: \n");
scanf("%f", &number2);
add = number1 + number2;
printf("result: %.2f \n", add);

}

void subtract(void){
float number1, number2;
float subtract;
printf("enter first number: \n");
scanf("%f" , &number1);
printf("enter second number: \n");
scanf("%f", &number2);
subtract = number1 - number2;
printf("result: %.2f \n", subtract);
}

void multiply(void){
float number1, number2;
float multiply;
printf("enter first number: \n");
scanf("%f" , &number1);
printf("enter second number: \n");
scanf("%f", &number2);
multiply = number1 * number2;
printf("result: %.2f \n", multiply);
}

void divide(void){
float number1, number2;
float divide;
printf("enter first number: \n");
scanf("%f" , &number1);
printf("enter second number: \n");
scanf("%f", &number2);
divide = number1 / number2;
if (number2 == 0){


    printf("math error \n");
}
printf("result: %.2f \n", divide);
}
