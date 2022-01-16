#include "stdio.h"

int main(){

    // loop meaning doing something until its being false
    printf("Printing the table of the given number\n");
    int n;
    scanf("%d",&n);
    printf("----------------------------\n");
    for(int i = 1 ; i<=10 ; i++){
        printf("%d\n",n*i);
    }
    return 0;
}