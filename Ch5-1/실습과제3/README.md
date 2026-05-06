# 실습과제 3
<img width="340" height="44" alt="image" src="https://github.com/user-attachments/assets/59afafc0-d8fc-4759-9e6e-13b939bf4fa5" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
#include <string>
- string 클래스 사용
using namespace std;
- std 네임스페이스 사용
string GetString(string* a, string* b);
- 두 문자열을 비교하여 사전상 뒤에 오는 문자열을 반환하는 함수
int main() {
- 프로그램 시작점
    string s1("hello");
- 문자열 s1 초기화
    string s2("world");
- 문자열 s2 초기화
    string res;
- 결과 저장 변수
    res = GetString(&s1, &s2);
- s1, s2의 주소 전달
    cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
- 결과 출력
}
string GetString(string* a, string* b) {
- 문자열 비교 함수
    if (*a > *b)
- 문자열 비교
        return *a;
- a가 더 뒤에 있으면 반환
    else
        return *b;
- 그렇지 않으면 b 반환
}
