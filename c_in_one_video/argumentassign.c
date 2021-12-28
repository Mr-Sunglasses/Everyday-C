#include <stdio.h>

int main(void){

    // Argument Assignment operator
    // x = x+1 -> x+=1
    // x = x-1 -> x-=1
    // x = x+y -> x+=y
    // x = x-y -> x-=y
    // x/=y
    // x*=y
    // x%=y

    int x = 20;
    int y = 30;
    int z = 0;

    x+=5;
    y+=5;

    z+=x+y;

    printf("%d",z);
    



}