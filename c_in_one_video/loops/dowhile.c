#include "stdio.h"

int main(){

    int age = 0;

    do{
        printf("Please Enter Your Age\n");
        scanf("%d", &age);
        
        age > = 18 ? printf("You are Eligible for voting") : printf("You are not Eligible for voting");
        
    }while( age > 0);

    return 0;
}