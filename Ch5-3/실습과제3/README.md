# 실습과제3

<img width="212" height="44" alt="image" src="https://github.com/user-attachments/assets/57687104-2064-4409-b6fa-5c147683382b" />

### 매개변수가 포인터인 경우와 차이점을 설명하라.
- 주소를 직접 처리해야 하는 차이점이 있음.

```cpp
#include <iostream>
-iostream 라이브러리 포함
#include <string>
- string 클래스 사용
using namespace std;
- std 네임스페이스 사용
void SwapString(string& a, string& b);
- 두 문자열을 교환하는 함수 선언
int main() {
- 프로그램 시작점
    string s1("hello");
- 문자열 s1 초기화
    string s2("world");
- 문자열 s2 초기화
    cout << "교환전 문자열 " << s1 << " " << s2 << endl;
- swap 호출 전 문자열 출력
    SwapString(s1, s2);
- 두 문자열 교환
    cout << "교환후 문자열 " << s1 << " " << s2 << endl;
- swap 호출 후 문자열 출력
    return 0;
- 프로그램 종료
}
void SwapString(string& a, string& b) {
- 문자열 교환 함수 정의
    string t;
- 임시 저장용 문자열 변수
    t = a;
- a 값을 t에 저장
    a = b;
- b 값을 a에 대입
    b = t;
- t 값을 b에 대입 → 교환 완료
}
