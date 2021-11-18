#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    int N ;
    char A;
    printf("Belgi necha martta chiqsn?_");
    scanf("%d", &N);
    
    printf("belgini kriting_");
    scanf("%c", &A);
    scanf("%c", &A);
    
    
    printf("Natija: ");
    
    for(int i=0; i<N; i++){
        
        printf("%c ", A);
    }
    printf("\n\n\n");

    return 0;
}