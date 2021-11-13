#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main(){
    char avtomabilar[] = {"nexia matiz spark"};
    int olchami = sizeof(avtomabilar)/sizeof(avtomabilar[0]);
    
    for(int i=0; i<olchami; i++){
        printf("ASC2= %d \n", avtomabilar[i]);
    }
   printf("\n");
    return 0;
}
