#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Hola mundo\n");
    int random = 30;
    int * pRandom = &random;
    //punto 1
    printf("%p\n", pRandom);
    //punto 2
    printf("%p\n", pRandom);
    //punto 3
    printf("%p\n", &random);
    //punto 4
    printf("%p\n", &pRandom);
    //punto 5
    printf("%d\n", sizeof(random));

}
