#include <stdio.h>

int main(void)
{
    int *a;  
    int b;
    a = &b;
    printf("変数aのアドレスは%p\n", a);
    printf("変数aのアドレスは%p\n", &b);
    return 0;
}