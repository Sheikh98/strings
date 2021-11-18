#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
   char satr[100];
   
   printf("satrni kriting_");
   fgets(satr, 100, stdin);
   
   int olchami= strlen(satr), N;
   
   printf("satr olchami %d \n N=", olchami);
   scanf("%d", &N);
   for(int i=0; i<olchami-1; i++){
       printf("%c", satr[i]);
       for(int j=0; j<N; j++){
           printf("*");
       }
    }
    return 0;
}