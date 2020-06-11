/*
    함수와 stack이 어떻게 도는지 이해하면 왜 지역변수를 선언할 때 맨 위에 선언했어야 했나라는 이유를 알 수 있음
*/

#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;

    printf("%d + %d = %d\n", a, b, a + b);

    int c = 3; // C90 컴파일러라면 에러남 (변수는 항상 블록 최 상위에서 선언되어야 한다는 이유로)
    printf("%d", c);

    return 0;
}