#include "stdio.h"
#include "math.h"


int decimal_to_binary(decimal_number){

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

// function definition
int binary_to_decimal(long long binary_number) {
  int decimal = 0, i = 0, rem;

  while (binary_number!=0) {
    rem = binary_number % 10;
    binary_number /= 10;
    decimal += rem * pow(2, i);
    ++i;
  }

  return decimal;
}


int complemet(long long binary_complement){
  
}


int main(void){

  int long long x = decimal_to_binary(5);
  printf("%lld\n",x);

  // int y = binary_to_decimal();
  // printf("%d\n",y);


  return 0;
}




