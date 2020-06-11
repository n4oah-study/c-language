/*
    피연산자가 하나일 경우 밑에 기호의 의미가 허용 됨

    역참조 연산자 *
    주소 연산자 &
*/

#include <stdio.h>

int main()
{
    int num1 = 10;
    int* p = &num1; // 포인터 변수 선언(o) &는 주소 연산자임 어떤 변수의 메모리 주소를 반환
    int num2 = *p; // 역참조 연산자
    int result = num1 * num2; // 곱셈

    printf("%d\n", result);

    return 0;
}