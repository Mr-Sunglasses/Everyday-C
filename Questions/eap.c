#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int decimal_to_binary(int decimal_number);
int binary_to_decimal(long long int binary_number);
int complemet(long long int given_number);





int main(void){

    int number_to_check_comp;
    printf("Enter the number you want to check the 1's Complemet");
    scanf("%d",&number_to_check_comp);


}




int decimal_to_binary(int decimal_number){


  int n = decimal_number;

  int long long binary = 0;

  int j , rem , i = 1;

  for(j=n;j!=0;j){

    rem = j%2;
    j/=2;
    binary+=rem*i;
    i*=10;
  }

  return binary;
}



int binary_to_decimal(long long int binary_number){

    int decimal = 0, i = 0, rem;

  while (binary_number!=0) {
    rem = binary_number % 10;
    binary_number /= 10;
    decimal += rem * pow(2, i);
    ++i;
  }

  return decimal;


}

int complemet(long long int given_number){

    
    





}