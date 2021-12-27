#include "stdio.h"


int power(int num , int exp){
    int ans;
    ans = 1;
    while (exp != 0)
    {
        ans = ans * num;
        --exp;
    }

    return ans;
    
}