#include "stdlib.h"
#include "stdio.h"


double square(double x){
    return x*x;
}

int main(void)
{
    double x = square(22); 
    printf("%lf",x); 
    return 0;
    
    
}