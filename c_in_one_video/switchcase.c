#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void){

    int store_entry;
    int item_number;

    while (true)
    {
       printf("Press 1 to Enter the Store and 0 for Exit: ");
       scanf("%d",&store_entry);

       if(store_entry == 1){

        printf("Please Enter your Item Number which you want to get information: ");
        scanf("%d",&item_number);

        switch (item_number)
        {
        case 1:
            printf("The Item is Apple\n");
            break;
        
        case 2:
            printf("The Item is Mango\n");
            break;
        
        case 3:
            printf("The Item is Choclate\n");
            break;
        
        case 4:
            printf("The Item is Coffee\n");
            break;

    default:
        printf("Please Enter the Right Item Number\n");
        break;
    }
    }else{
           break;
       }
    }
    
    


}