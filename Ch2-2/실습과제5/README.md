## 코드 설명

```cpp

#include <iostream>
iostream 라이브러리 포함
using namespace std;

int main() {
- 프로그램 시작점
    char text[100];
- 글자 자료형 변수 선언
    cout << "빈칸 없이 문자열을 입력 하세요 >>";
    cin.getline(text, 100);
- 
    for (int i = 0; text[i]; i++) {
- 0부터 텍스트를 입력 받은 수 만큼 반복
        cout << text[i] << " ";
- 입력 받은 텍스트를 
    }
return 0;
- 0을 반환 및 프로그램 종료
}
