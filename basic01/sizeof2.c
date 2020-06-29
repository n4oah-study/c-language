#include <stdio.h>

int do_something(int *argss)
{
    /*
    - sizeof(매개변수)는 포인터 데이터형의 크기가 나옴
    - 32 비트 플랫폼에선 4바이트, 64비트에서는 8바이트
    - argss가 갖고있는 주소는 매개변수로 넘어온 배열의 주소의 시작 주소임
    - 포인터를 넘겨졌기 때문에 복사가 아님
    */
    printf("%zu\n", sizeof(argss)); // 8

    return 1;
}

int main()
{
    int values[4] = { 1, 2, 3, 4 };

    int size = do_something(values);

    return 0;
}