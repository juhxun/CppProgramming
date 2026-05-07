# 실습과제2

<img width="178" height="62" alt="image" src="https://github.com/user-attachments/assets/032816ca-a222-4180-add0-711fdce9c15d" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
void add2(int& value);
- 정수를 참조로 받아 2 증가시키는 함수 선언
int main(void)
- 프로그램 시작점
{
    int number;
- 입력받을 정수 변수
    cout << "정수를 입력하세요 : ";
- 입력 안내 출력
    cin >> number;
- 정수 입력
    add2(number);
- number를 함수에 전달
- 참조 전달이므로 원본 값이 직접 변경됨
    cout << "2만큼 증가한 값 : " << number << endl;
- 증가된 결과 출력
    return 0;
- 프로그램 종료
}
void add2(int& value)
- 참조 변수(value)로 정수 전달
{
    value += 2;
- 전달받은 원본 값을 2 증가
}
