#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    double A = sqrt(9); // Square root
    double B = pow(2,4); // Power
    int C = round(3.14); // round
    int D = ceil(3.14); //Closed to the maximum number
    int E = floor(3.99); // Floor
    int F = abs(100); // gives the absolute value
    double G = log(3); // log
    double H = sin(45); // corresponding sin value
    double I = cos(45); // corresponding cos value
    double J = tan(45); // corresponding tan value

    printf("%1.f\n",A);
    printf("%1.f\n",B);
    printf("%d\n",C);
    printf("%d\n",D);
    printf("%d\n",E);
    printf("%d\n",F);
    printf("%lf\n",G);
    printf("%lf\n",H);
    printf("%lf\n",I);
    printf("%lf\n",J);
}