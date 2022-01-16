#include "stdio.h"
#include "stdlib.h"

int is_even(int number);

int main(){

    
    int x = is_even(22);
    printf("%d\n",x);

    return 0;
}


int is_even(int number){
    // ternery operator = (if this is true) ? return this : else return this
    return number%2==0 ? 1 : 0;
}