#include <stdio.h>
#include <string.h>

int main(void){

    char name[25];
    int age;

    printf("\nWhat's your name?");
    // scanf("%s",&name);
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you ?");
    scanf("%d",&age);

    printf("Hello %s , How are you?\n",name);
    printf("You are is %d",age);



}