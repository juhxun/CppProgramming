# 실습과제 3
<img width="356" height="55" alt="image" src="https://github.com/user-attachments/assets/700d940f-31e1-4637-bd12-959c6eb30785" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
#include <string>
- string 클래스 사용을 위해 라이브러리 포함
using namespace std;
int main() {
- 프로그램 시작점
	string str;
- 입력받을 문자열 변수
	int count = 0;
- 문자 'a'의 개수를 저장할 변수
	cout << "문자열을 입력: ";
- 입력 안내 메시지 출력
	getline(cin, str);
- 공백 포함 문자열 입력
	for (int i = 0; i < str.length(); i++)
- 문자열 길이만큼 반복
	{
		if(str[i] == 'a')
- 현재 문자가 'a'인지 확인
		{
			count++;
- 'a'이면 개수 증가
		}
	}

	cout << "문자 a는 " << count << "개 있습니다." << endl;
- 'a'의 총 개수 출력
	return 0;
- 프로그램 종료
}
