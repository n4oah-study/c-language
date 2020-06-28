#include <stdio.h>

int main(void)
{
    int a = func(3);

    printf("%d\n", a);

    return 0;
}

/* 함수 파라미터에 const */
int func(const int a)
{
    /* 컴파일 에러 */
    /* a = a + 1; */

    return a;
}