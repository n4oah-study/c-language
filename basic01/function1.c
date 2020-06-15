#include <stdio.h>

int main()
{
    /*
    - C89 기준 컴파일러는 아직 main을 읽고 있기 때문에 func1라는 함수가 존재하는지 모름
    - 그러나 기본적으로 void가 아닌 int를 반환하고 있으면 함수를 실행하도록 허용 함
      단, 컴파일 중 실제 실행되는 함수가 int형이 아닌 다른 형을 반환할 경우 에러

    - void를 리턴하는 함수를 사용하기 위해서는 main함수 위에 정의해주어야 함
      (function2에서는 굳이 위에 정의를 안 하고 선언을 미리 해두는 해결방법을 설명할 것임)

    func1(); error
    */
    int res = func2();
    return 0;
}

void func1(void)
{
    printf("func1 함수 실행");
}

int func2(void)
{
    printf("func2 함수 실행");

    return 1;
}