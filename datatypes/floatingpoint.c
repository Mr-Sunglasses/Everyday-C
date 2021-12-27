//
// Created by Krishna Pachauri on 16/12/21.
//

#include "stdio.h"
#include "limits.h"
#include "stdbool.h"

int main(void){
    // Bool datatype
    bool myvar = true;
    int j = 1;
    while (myvar){
        printf("Hello World \n");
        if (j==10) {
            myvar = false;
        }else{
            j++;
        }

    }
}