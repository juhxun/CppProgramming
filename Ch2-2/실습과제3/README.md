## 코드 설명

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;


int main() {
- 프로그램 시작점
	char num[10];
	char name[10];
	char adress[20];
- 글자 자료형 변수 선언

	cout << "학번을 입력하시오:";
	cin >> num;
	cout << "이름을 입력하시오:";
	cin >> name;
	cout << "주소를 입력하시오:";
	cin.ignore();
- 공백 제거
	cin.getline(adress, sizeof(adress), '\n');
	cout << endl;
- 학번 변수에 관한 정보를 엔터 누를때까지 입력 받음

	cout << "1. 학번:" << num << endl;
	cout << "2. 이름:" << name << endl;
	cout << "3. 주소:" << adress << endl;

- 입력 받은 정보에 대한 값 출력
return 0;
0을 반환 및 프로그램 종료
}

