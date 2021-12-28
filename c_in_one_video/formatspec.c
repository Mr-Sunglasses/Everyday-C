#include <stdio.h>

int main(void){


    // Format Specifiers % - Define the format of the datatype to be displayed

    // %c = Character
    // %s = String (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision 
    // %1 = minimum field width
    // %- = left align

    float item1 = 4.123;
    float item2 = 5.23;
    float item3 = 6.345;

    printf("The price of Item1 is $%f\n",item1);
    printf("The price of Item1 is $%.3f\n",item1);
    printf("The price of Item2 is $%8.1f\n",item2);
    printf("The price of Item3 is $%-8.3f and it is little bit costly",item3);



}