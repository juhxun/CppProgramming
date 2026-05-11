# 실습과제2

<img width="162" height="42" alt="image" src="https://github.com/user-attachments/assets/e7789674-a7f0-4170-9767-b0ab8777d1c3" />

```cpp
#include <iostream>
-iostream 라이브러리 포함
#include <string>
- string 클래스 사용
#include <cctype>
- 문자 처리 함수사용을 위한 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
void Uppercase(string& s);
- 문자열을 대문자로 변환하는 함수 선언
- 참조 전달 사용
int main() {
- 프로그램 시작점
    string s1("hello");
- 문자열 s1 초기화
    cout << "변환전 문자열 " << s1 << endl;
- 변환 전 문자열 출력
    Uppercase(s1);
- 문자열을 대문자로 변환
    cout << "변환후 문자열 " << s1 << endl;
- 변환 후 문자열 출력
    return 0;
- 프로그램 종료
}
void Uppercase(string& s) {
- 문자열을 참조로 받아 직접 수정하는 함수
    for (int i = 0; i < s.length(); i++) {
- 문자열 길이만큼 반복
        s[i] = toupper(s[i]);
- 각 문자를 대문자로 변환
    }
}
