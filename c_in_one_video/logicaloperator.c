#include "stdio.h"

int main(void){

    // Logical Operators 
    /*
        1 - And(&&) - If both conditions are true return true else return false
        2 - Or(||) - If One of the conditions are true return true , if both false return false
        3 - not(!)

    */

   int a = 20;
   int b = 300;


   // and logic
   if(a>10 && b<100){
       printf("And condition is True\n");
   }else{
       printf("And condition is False\n");
   }

   // or logic 
   if(a>10 || b<100){
       printf("OR condition is True\n");
   }else{
       printf("OR condition is False\n");
   }
   
   // Not logic
   if(a!=0){
       printf("This is not condition\n");
   }
}