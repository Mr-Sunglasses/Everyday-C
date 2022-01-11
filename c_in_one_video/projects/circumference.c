#include "stdio.h"
#include "stdlib.h"
#include "math.h"
// To calculate the circumfrence of a circle = 2*pi*r

int main(void){

    const double pi = 3.14;
    double radius;
    printf("Enter the radius of the circle you want to calculate the circumference\n");
    scanf("%lf",&radius);
    double circumference = 2*pi*radius;
    printf("The circumference of the given circle is %.3f ",circumference);




} 