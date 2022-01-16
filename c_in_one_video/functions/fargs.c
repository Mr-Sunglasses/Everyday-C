#include "stdio.h"
#include "stdlib.h"

void birthday(char name[] , int age){

    printf("Happy Birthday %s! ",name);
    printf("You are %d year old dear.\n",age);
}

int main(void){

    birthday("Kanishk",19);
}