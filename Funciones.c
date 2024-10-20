#include <stdio.h>

int main (void) {
    int num,mul, cont=0;

    printf("Escribe un numero\n");
    scanf("%d", &num);

    mul = multi(num,cont);

    printf("%d",mul);
    return 0;
}
