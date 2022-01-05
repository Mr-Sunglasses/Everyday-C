#include "stdio.h"
#include "stdbool.h"
#include "math.h"

// What is an Armstrong no 
// - If the cube of the individual numbers in a number is equal to the number then the number is called an armstrong number

int armstrong_checker(int number);
int power_of_a_number(int number_please);

int main(void){

    int numberToCheck;

    printf("Enter the number You want to check armstrong or not armstrong\n");
    scanf("%d",&numberToCheck);

    int sum_of_gn = armstrong_checker(numberToCheck);
    
    if (numberToCheck == sum_of_gn){
        printf("The number %d is an armststong\n",numberToCheck);
    }else{
        printf("The number %d is not an armstrong\n",numberToCheck);
    }
}

int armstrong_checker(int number){
    int sum = 0, rem = 0;
    int powerofnumber = power_of_a_number(number);
    while (number>0)
    {
        rem = number%10;
        sum += pow(rem,powerofnumber);
        number = number/10;
        rem = 0;
    }

    return sum;
}

int power_of_a_number(int number_please){
    int power = 0, rem1 = 0;
    while (number_please>0)
    {
        rem1 = number_please%10;
        number_please = number_please/10;
        rem1 = 0;
        power++;
    }

    return power;
}