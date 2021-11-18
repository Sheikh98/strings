#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
   char satr[100];

   printf("kritgan so'z teskari tartbda chiqadi_");
   fgets(satr, 100, stdin);

   int olchami = strlen(satr);

   for(int i=olchami; i>=0; i--){
       printf("%c ", satr[i]);
   }

    return 0;
}
