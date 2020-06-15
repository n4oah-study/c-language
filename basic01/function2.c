/*
    함수 선언
    
    - 함수의 구현체 없이 원형(prototype)만 선언함
      1. 함수의 이름
      2. 반환형
      3. 매개변수의 자료형
    - 물론 함수 정의자체가 선언이긴 함;;
*/

#include <stdio.h>

void foo();

int main()
{
    foo();

    return 0;
}

void foo()
{
    printf("foo 함수 실행");
}