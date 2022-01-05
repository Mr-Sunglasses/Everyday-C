#include <stdio.h>
#include <stdlib.h>  
#include <string.h>  
#include <math.h>

char * convertNumberIntoArray(unsigned int number) {
    int length = (int)floor(log10((float)number)) + 1;
    char * arr = new char[length];
    int i = 0;
    do {
        arr[i] = number % 10;
        number /= 10;
        i++;
    } while (number != 0);
    return arr;
}

int main(void){

    int x = 11011;
    char y[] = convertNumberIntoArray(x);
    int v = atoi(y);
    printf("%d",v);

}