# 실습과제 4
<img width="197" height="54" alt="image" src="https://github.com/user-attachments/assets/ae361f71-e455-4452-9377-10458be2ab06" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
#include <string>
- string 클래스 사용
using namespace std;
- std 네임스페이스 사용
void SwapString(string* a, string* b);
- 두 문자열을 서로 교환하는 함수 선언
int main() {
- 프로그램 시작점
    string s1("hello");
- 문자열 s1 초기화
    string s2("world");
- 문자열 s2 초기화
    cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;
- 함수 호출 전 값 출력
    SwapString(&s1, &s2);
- s1, s2의 주소를 전달
    cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;
- 함수 호출 후 값 출력

}
void SwapString(string* a, string* b) {
- 문자열 교환 함수
    string temp = *a;
- a가 가리키는 값 저장
    *a = *b;
- b의 값을 a에 대입
    *b = temp;
- temp에 저장한 값을 b에 대입
}

