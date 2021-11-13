#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    
    int a;
    char b;
    printf("belgini kriting= ");
    scanf("%d", &a);
    
    if((a>32)&&(a<=126)){
        b = a; 
        printf("Javob = %c", b);
    }

    
   printf("\n");
    return 0;
}
