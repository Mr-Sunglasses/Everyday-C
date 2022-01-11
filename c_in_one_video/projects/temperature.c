#include "stdio.h"
#include "ctype.h"

int main(){


    char unit;
    float temp;

    printf("Is the temperature in (F) or (C): ");
    scanf("%c",&unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("Please Enter the temperature in Celsius\n");
        scanf("%d",)
    }else if (unit == 'F')
    {
        printf("The temperature unit is in F\n");
    }else{
        printf("Please Enter a valid measurement\n");
    }
    




    return 0;
}