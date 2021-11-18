#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char b=123;

    printf("soni kriting_ ");
    scanf("%d", &n);

    for(int i=n; i>=0; i--){
        b--;
        printf("ASC2-26= %c\n", b);
    }

    return 0;
}
