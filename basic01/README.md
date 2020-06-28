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

# 함수 (function)
- 함수 매개변수의 평가순서
  - 표준에 따르면, 함수 매개변수의 평가 순서는 명시되어있지 않음(unspecified)
  - 즉, 컴파일러에 따라 평가 순서가 달라질 수 있음
  ```c
  printf("%d, %d", foo(), bar());
  ```
  - printf()가 실제로 실행되기 전에 foo(), bar()가 호출된다는 것은 보장
  - 그러나 실행 순서는 보장하지 않음
  ```c
  int num = 0;

  /* divide는 첫번 째 파라미터를 두번째 파라미터로 나눈 값임 */
  float result = divide(++num, ++num);

  printf("%f\n", result); // undefined behavior: 정의되지 않음

  return 0;
  ```
  - unspecified: 컴파일러에 따라 달라질 수 있다
  - undefined behavior: 어떤 값이 나올지 알 수 없음 (동시에 평가되는 경우)
  - 한 줄에서 같은 변수를 두 번 이상 수정하지 말자..
- 연산자 우선순위와 평가 순서
  - 연산자 우선순위와 평가 순서는 ___<u>서로 아무 연관이 없음</u>___
  - 먼저 함수 평가순위에 따라 함수가 실행되고 연산자가 실행 됨

# 파일 범위, 전역 변수 메모리
- 함수에서 사용하는 변수는 스택 메모리에 들어감
- 있는 변수는 `데이터 섹션`에 들어감

# 스택 메모리
![images](https://raw.githubusercontent.com/n4oah-study/c-language/master/basic01/imgs/%EC%8A%A4%ED%83%9D%EB%A9%94%EB%AA%A8%EB%A6%AC.PNG)
- 각 함수에서 사용하는 지역변수 등을 임시적으로 저장하는 공간
- 스택 메모리의 크기는 프로그램 빌드 시에 결정 됨
- 스택 메모리의 위치는 실행 시에 결정됨
- 함수가 실행될 때 마다 스택이 할당 됨