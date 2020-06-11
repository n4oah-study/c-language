# 기본문법 등

declare_variable.c: 변수 선언
sizeof.c: sizeof와 size_t
enun.c: 열거형 변수
dereference.c: 역참조 연산자, 주소 연산자
operator.c: 구조체/공용체 멤버 접근자 .과 ->

# if문과 불 표현식(Boolean expression)
- C언어의 비교 연산자나 조건 연산자를 사용한 표현식은 참일경우 1, 거짓일 경우 0을 반환함 (boolean을 반환하지 않음)
- C언어에서는 false:0 그 외에는 true임

# switch case에는 int, char, enum만 가능 (C#은 string도 가능 했었음)
- case에서 의도를 갖고 break를 사용하지 않았다면 주석으로 '/* intentional fallthrouhgh */' 를 붙여야 함 (그냥 표준임 필수는 아님)