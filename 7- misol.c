#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    int massiv[8][8] = {10, 88, 50, 40, 20, 23, 43, 22};
    char birinchi, oxirgi;
    
    birinchi = massiv[0][0];
    oxirgi = massiv[0][7];
        
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 8; j++)
        {
           printf("%d \t", massiv[i][j]);
        }
        printf("\n\n\n");
    }

    printf("birinchi: %c\n", birinchi);
    printf("oxirgi: %c\n", oxirgi);

    return 0;
}