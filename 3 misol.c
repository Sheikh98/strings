#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    
    int a, oldingi, keyingi;
    char b, o, k;
    printf("belgini kriting= ");
    scanf("%d", &a);
    
    b = a;
    oldingi = b-1;
    keyingi = b+1;
    
    o = oldingi; 
    k = keyingi;
    
    
        
    printf("o'zi= %c\n ", b );
    printf("oldingi= %c \n", o );
    printf("keyingi= %c", k);
    
    
  
    return 0;
}
