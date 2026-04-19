# 실습문제 2

<img width="301" height="148" alt="image" src="https://github.com/user-attachments/assets/1e6274c1-3ccc-44f1-a449-47a6f58e65f6" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
#include <string>
- string 클래스 사용을 위해 라이브러리 포함
using namespace std;
int main() {
- 프로그램 시작점
	string str1, str2;
	int count = 0;
- 입력 횟수를 세는 변수
	while (true) {
- 무한 반복
		cout << "문자열을 입력: ";
		getline(cin, str1);
- 공백 포함 한 줄 문자열 입력
		if (str1 == "quit") {
- "quit" 입력 시 종료 조건
			break;
- 반복문 탈출
		}
		str2 = str2 + "<" + to_string(++count) + ">" + str1;
- 기존 문자열에 번호와 함께 이어붙임
- ++count → 먼저 증가 후 사용
		cout << "이어진 문자열: " << str2 << endl;
- 현재까지 누적된 문자열 출력
	}
	return 0;
- 프로그램 종료
}
