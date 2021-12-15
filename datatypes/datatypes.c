//
// Created by Kanishk Pachauri on 16/12/21.
//

#include "stdio.h"
#include "limits.h"

int main(void){
    //short - 2 Bytes - [MAX - 32767 , MIN - -32768 ]
    // Int - 4 Bytes - [MAX - 2147483647 , MIN - -2147473648 ]
    // long - 8 Bytes - [MAX - 9223372036854775807 , MIN - -9223372036854775807]
    // long long - 8 Bytes

    int a = 30;
    int b = 40;
    int c = 70;
    printf("%d + %d = %d \n", a , b , c);
    printf("The max limit of an Int is %lld \n",LLONG_MAX);
    printf("The min Limit of an Int is %ld \n",LONG_MIN);

    int f = 2147483647;
    long long f1 = 21637737120235;
    printf("The size of int f is %ld \n", sizeof(f));
    printf("The size of int f is %ld \n", sizeof(f1));

    // Singned and Unsigned
    unsigned long long varxp = 344237752124045;
    printf("This int = %llu is unsiged \n",varxp);
}