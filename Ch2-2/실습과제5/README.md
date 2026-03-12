## 코드 설명

```cpp

#include <iostream>
- iostream 라이브러리 포함

using namespace std;
- std:: 없이 cout, cin 바로 사용 가능

int main() {
- 프로그램 시작점

    char text[100];
    - 문자열 저장용 문자 배열 선언

    cout << "빈칸 없이 문자열을 입력 하세요 >>";
    cin.getline(text, 100);
    - 한 줄 전체 문자열 입력 (공백 포함 가능)

    for (int i = 0; text[i]; i++) {
    - 문자열 끝('\0')까지 반복

        cout << text[i] << " ";
        - 문자열의 각 문자를 한 글자씩 출력하고 공백 추가
    }

    return 0;
    - 0반환 및 프로그램 종료

}
