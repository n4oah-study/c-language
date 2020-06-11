#include <stdio.h>

enum fruit
{
    APPLE, PEACH, BANANA
};

enum compony
{
    GOOGLE, SAMSUNG, LG, NAVER
};

int main()
{
    printf("안녕 세계");

    enum fruit f_var = BANANA;

    printf("%d", f_var);

    enum compony c_var = f_var; // C언어에서의 enum은 그냥 int임 (int -> enum -> int -> enum -> 다른 enum) 가 가능함
    printf("%d", c_var);

    return 0;
}