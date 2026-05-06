#include <stdio.h>

int main(void){

    int a = 5; //Equal sign means assigment
    int b = 5;
    int c = 10;
    printf("%d == %d is %d \n", a, b, a == b); //equal sign means comparison
    printf("%d != %d is %d \n", a, c, a != c); //A AND C ARE NOT THE SAME SO WHEN WE RUN THE SYSTEM ITLL SAY 0
// the != means "NOT EQUAL"
//Create a program to check if a number is negative
    int number;
    printf("Enter a number: ");
    scanf("%d", &number); //We make the user give the variable number a value
    if (number <0) {
    printf("%d is a negative number. \n", number);
    }
}
