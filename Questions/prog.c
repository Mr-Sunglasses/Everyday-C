#include "stdio.h"

int main(){

    int l , r , k , count=0;
    
    l = 12;
    r = 22;
    k = 2;

    for (int i=l;i<=r;i++){  // 12 ,22 i = 12 , 13 , 14 , 15 , 16

        if (i%k == 0){
            count++;

        }

    }

    printf("%d\n",count);

    return 0;



}

