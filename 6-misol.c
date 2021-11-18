#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    char c;
    printf("son kiriting:");
    scanf("%c", &c); 
    if(0<=c, c<=47 || 58<=c, c<=64 || 91<=c, c<=96){
        printf("%c=0", c);
    }
    else if(48<=c, c<=57){
        printf("digit");
    }
    else if(65<=c && c<=90 || 97<=c && c<=122){
        printf("lotin");
    }
    else if(123<=c, c<=255){
    printf("0");
    }

        
    return 0;
}