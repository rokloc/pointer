#include <stdio.h>

int main(void)
{
    int *a = NULL;     //int型のポインタ変数aを宣言
    int b;      //変数bを宣言
    a = &b;     //ポインタ変数aに変数bのアドレスを代入
    printf("変数aのアドレスは%p\n", a); 
    printf("変数aのアドレスは%p\n", &b);
    return 0;
}