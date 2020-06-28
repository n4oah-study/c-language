#include <stdio.h>


/* 파일범위 scope 
 * 트랜슬레이션 유닛(Translation Unit)
 *
 * 어떤 블록이나 매개변수 목록에도 안 속하고 파일 안에 있는 것
 * 전역변수임
 */
static int s_num = 1024;

/* 전역변수, 전역변수는 앞에 g를 붙임 */
int g_x = 100;

int add(int op1, int op2);

int main(void)
{
    /* 파일범위 scope 시작*/
    s_num = add(1, 2);

    printf("%d\n", s_num);
    /* 파일범위 scope 끝 */

    /* 함수 범위 시작
     *
     * - 유일한 예: 레이블(label)
     * - goto같은 곳에 쓰임
     * - 함수 안에서 선언된 레이블은 함수 어디에서라도 접근 가능
     *   - 다른 범위들은 위에서 선언된 것만 접근 가능했음
     * 
     * - goto는 나중에 배움
     */

    int argc = 0;
    if (argc != 3) {
        goto exit;
    }
exit: /* 레이블임 3이 아닐 때 일로 넘어옴*/
    return 0;

    /* 함수 범위 끝 */

    /* 전역변수 시작 */
    printf("%d", g_x);
    /* 전역변수 끝 */

    return 0;
}

int add(int op1, int op2)
{
    return op1 + op2;
}