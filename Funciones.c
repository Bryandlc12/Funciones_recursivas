#include <stdio.h>

int main (void) {
    int num,mul, cont=0;

    printf("Escribe un numero\n");
    scanf("%d", &num);

    mul = multi(num,cont);

    printf("%d",mul);
    return 0;
}
int multi(int num, int cont) {
    int b;
    b = cont + 1;
    int result = num * b;
    printf("%d * %d = %d \n", num, b, result);
    if (b == 0 || b == 100) 
        return 1;
    
    return cont * multi(num = num, cont + 1);
}
