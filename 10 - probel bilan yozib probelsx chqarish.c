#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
   char satr[]= {"Assalomu alaykum"};
   int olchami = sizeof(satr)/sizeof(satr[0]);
   
   for(int i=0; i<olchami; i++){
       printf("%d \n", satr[i]);
    }
    return 0;
}