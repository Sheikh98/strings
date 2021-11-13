#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    
    char a;
    printf("belgini kriting= ");
    scanf("%c", &a);

    char avtomabilar[1] = {a};
    int olchami = sizeof(avtomabilar)/sizeof(avtomabilar[0]);
    
    for(int i=0; i<olchami; i++){
        printf("ASC2= %d \n", avtomabilar[i]);
    }
   printf("\n");
    return 0;
}
