#include <stdio.h>

int main(){

    /*
    A variable is nothing but a name given to a storage area that our programs can manipulate. 
    Each variable in C has a specific type, which determines the size and layout of the variable's memory; 
    the range of values that can be stored within that memory; 
    and the set of operations that can be applied to the variable
    */

   int x; //declation 
   x = 123; //initialization
   int y = 212; // Declation and Initialization

   //Datatype
   int age = 21; //integer
   float gpa = 2.05; //Floating point number
   char grade = 'C'; //single character
   char name[] = "Kanishk"; //array of character

   printf("This is a int datatype %d\n",age);
   printf("This is a float datatype %f\n",gpa);
   printf("Thi is a char datatype %c\n",grade);
   printf("This is a array of string datatype %s\n",name);



    return 0;
}