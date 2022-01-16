#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

// Making a function prototype
void greet_birthday(char[] , int);

int main(){

    greet_birthday("Kanishk Pachauri",19);


    return 0;
}

void greet_birthday(char name[] , int age){

    printf("Hello %s We'll greet you a happiest %d birthday\n",name,age);
}