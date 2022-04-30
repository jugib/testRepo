#include "ostoslistah.h"


void ask_product(int table[])
{
    int number, amount;
    char contine;
  
   
   
  
   
   
printf("Give Product number: ");
scanf(" %d", &number);
getchar();

printf("Give amount for product number %d:", number  );
scanf(" %d", &amount );
getchar();

printf("Do You want to continue?");
scanf(" %c", &contine);
getchar();
if (contine == 'y') {
     
    ask_product(table);}

else {
     return 0;

}

}