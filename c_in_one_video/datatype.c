#include "stdio.h"
#include "stdbool.h"
#include "limits.h"

int main(){

    char favourite_language[] = "Python"; // Array of Character %s


    //Float
    float c = 3.141592653589793;  // 4 bytes (32 bits of precision) 6 - 7 digits %f
    printf("The precision of float is %0.5f\n",c); 
    printf("The size of float is %ld bytes\n",sizeof(c)); // To print the size of the given datatype
    double d = 3.141592653589793;  // 8 bytes (64 bits of precision) 15 - 16 digits %lf 
    printf("The precision of double is %0.14lf\n",d);
    printf("The size of double is %ld bytes\n",sizeof(d));


    // Boolean
    bool e = true; // 1 Byte (true or we can say that 1) %d
    printf("The size of bool is %ld bytes\n",sizeof(e)); // To print the size of the given datatype
    printf("The given vale of boolean e is %d\n",e);
    bool f = false; // 1 Byte (false or we can say that 0) %d   
    printf("The size of bool is %ld bytes\n",sizeof(f)); // To print the size of the given datatype
    printf("The given vale of boolean f is %d",f);

    // Char
    char mychar = 'C';    // Single Character %c

    char g = 110; // 1 Byte (-128 to +127) %d - to Display the corresponding int value or %c to display the char value of corresponding integer
    printf("The size of a character is %ld in bytes\n",sizeof(g));
    printf("The int value of given char %d is %d\n",g ,g);
    printf("The char value of given char %d is %c\n",g,g);

    unsigned char h = 244; // 1 byte (0 +255) %d - to Display the corresponding int value or %c to display the char value of corresponding integer
    printf("The size of a Unsigned character is %ld in bytes\n",sizeof(h));
    printf("The int value of given char %d is %d\n",h ,h);
    printf("The char value of given char %d is %c\n",h ,h);

    // Int
    short int i = 3277; // 2 Byte (-32,768 to +32,767) %d
    printf("The size of a short int is %ld in bytes\n",sizeof(i));
    printf("The value of variable i is %d\n",i);
    printf("The max Limit of short int is %d\n",SHRT_MAX);
    printf("The min Limit of short int is %d\n",SHRT_MIN);

    unsigned short j = 64000; // 2 Byte (0 to +65,535) %d
    printf("The size of a unsigned short int is %ld in bytes\n",sizeof(j));
    printf("The value of variable j is %d\n",j);
    printf("The max Limit of unsigned short int is %d\n",USHRT_MAX);




    int k = 214765453; // 4 Bytes (-2,147,483,648 to +2,147,483,647) %d
    printf("The size of int is %ld in bytes\n",sizeof(k));
    printf("The value of variable k is %d\n",k);
    printf("The max Limit of int is %d\n",INT_MAX);
    printf("The min Limit of Int is %d\n",INT_MIN);


    unsigned int l = 429496727; // 4 Bytes (0 to +4,294,967,295) %u
    printf("The size of unsigned int is %ld in bytes\n",sizeof(k));
    printf("The value of variable l is %u\n",l);
    printf("The max Limit of int is %u\n",UINT_MAX);


    long int m = 922337203685477580;  // long - 8 Bytes - [MAX - 9223372036854775807 , MIN - -9223372036854775807] %ld
    printf("The size of long int is %ld in bytes\n",sizeof(m));
    printf("The value of variable m is %ld\n",m);
    printf("The max Limit of int is %ld\n",LONG_MAX);
    printf("The min Limit of Int is %ld\n",LONG_MIN);


    unsigned long int n = 9223372036854775801; // 8 Bytes (0 to +18446744073709551615) %lu
    printf("The size of long int is %ld in bytes\n",sizeof(n));
    printf("The value of variable n is %lu\n",n);
    printf("The max Limit of int is %lu\n",ULONG_MAX);


    long long int o = 344237752124045 ; // 8 Bytes (-9 quintillion to +9 quintillion) %llu
    printf("The size of long int is %ld in bytes\n",sizeof(o));
    printf("The value of variable o is %lld\n",o);
    printf("The max Limit of int is %lld\n",LLONG_MAX);
    printf("The min Limit of Int is %lld\n",LLONG_MIN);

    unsigned long long int q = 9223372036854758011; // 8 Bytes (0 to +18 quintillion) %llu
    printf("The size of long int is %ld in bytes\n",sizeof(o));
    printf("The value of variable q is %llu\n",q);
    printf("The max Limit of int is %llu\n",ULLONG_MAX);








    
}