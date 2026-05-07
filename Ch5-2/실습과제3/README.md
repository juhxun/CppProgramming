# 실습과제3

<img width="207" height="76" alt="image" src="https://github.com/user-attachments/assets/91ec1548-2f99-44e4-b1a6-10c8b50e598b" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
void swap(int& a, int& b);
- 두 정수를 서로 교환하는 함수 선언 (참조 방식)
int main() {
- 프로그램 시작점
    int x, y;
- 교환할 정수 변수
    cout << "정수x를 입력 하시오: ";
    cin >> x;
- x 값 입력
    cout << "정수y를 입력 하시오: ";
    cin >> y;
- y 값 입력
    cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;
- swap 호출 전 값 출력
    swap(x, y);
- x와 y를 함수에 전달
- 참조 전달이므로 원본 값이 직접 교환됨
    cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;
- swap 호출 후 값 출력
    return 0;
- 프로그램 종료
}
void swap(int& a, int& b) {
- 참조를 이용한 swap 함수 정의
    int temp;
- 임시 저장 변수
    temp = a;
- a 값을 temp에 저장
    a = b;
- b 값을 a에 대입
    b = temp;
- temp 값을 b에 대입
}
