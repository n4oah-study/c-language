/*
    sizeof는 컴파일 중에 평가된다.

    - 실행 중이 아니라 컴파일 도중에 크기를 찾음
    - 바꿔 말하면 컴파일 할 때 모르는 크기는 찾아줄 수 없음
    - char 형을 넣으면 반드시 1이 반환
    - 이 연산자가 반환하는 값은 부호 없는 정수의 상수로 size_t 형

    size_t

    - 어떤 것의 크기를 나타내기 위해 사용(for문을 돌릴 때 최대 size나 index의 값 처럼 음수가 필요없는 숫자를 표현할 때)
    - 부호 없는 정수형이나 실제 데이터형은 아님
    - C/C++에서 _t는 typedef를 했다는 힌트
        - typedef는 다른 자료형에 별칭이 붙이는 것
        - 플랫폼에 따라 다른 자료형을 쓰기 위해서 size_t를 typedef 한 것
        - typedef는 나중에 자세히 나옴
        - 예를 들어 Clang Windows에서는 64비트 운영체제일 경우 unsignint int64, 그 외(16, 32)일 경우 unsigned int (vcruntime.h에 있음)
    - C89 표준은 size_t의 최소, 최대 크기를 명시하지 않았음 (단 배열을 만들면 그 배열의 바이트 크기를 얻을 수 있다고는 명시해놈)
    - 그럼 배열의 크기가 얼마나 커질 수 있냐...인데
    - 2^8-1 = 255 바이트는 너무 적고
    - 최소 2^12-1 = 65535는 되어야 할 것 같음
    - 다행히도 C99표준에서 확실히 최소 16비트을 요구함
    - 보통은 unsigned int를 사용 (32비트)
*/

#include <stdio.h>

int main()
{   
    char ch = 'a';
    int n = 200;
    int int_array[30];

    size_t size_char = sizeof(ch);
    printf("size_char: %zu\n", size_char); // 1 byte

    size_t size_int = sizeof(n);
    printf("size_int: %zu\n", size_int); // 4 byte

    size_t size_float = sizeof(float);
    printf("size_float: %zu\n", size_float); // 4 byte

    size_t size_int_array = sizeof(int_array);
    printf("size_int_array: %zu\n", size_int_array); // 4 * 30 = 120 byte

    return 0;
}

/*
    - C# string의 IndexOf() 함수는 문자를 못 찾으면 -1을 반환했음
    - 만약 size_t를 반환하는데 -1을 반환하고 싶다면?
    - size_t는 음수를 갖을 수 없지만
    - '(size_t) -1'  로 -1을 size_t로 타입캐스팅을 하고 넘기면 sign int의 -1과 unsigned int 4,294,967,295는 같은 비트패턴을 갖기때문에
        함수를 호출한 쪽에서 signed int로 값을 받으면 -1값이 저장 될 꺼임
*/
/*
size_t get_students_index(const char* name)
{
    if (!조건)
    {
        return (size_t) -1;
    }

    return 올바른 인덱스
}
*/