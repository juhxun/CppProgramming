## 코드 설명
<img width="199" height="63" alt="image" src="https://github.com/user-attachments/assets/5260d082-f5ea-4e1d-accc-fa631b61e463" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;

int main(void) {
- 프로그램 시작점
	int x;
- x 변수 선언
	cout << "정수 x를 입력 하시오 : ";
	cin >> x;
- x에 값을 입력 받음

	cout << "x=" << x << "일때 y의 값은" << x*x + 2*x -5 ;
- y을 구하고 출력(x*x + 2*x -5 = y)
	return 0;
- 0을 반환 및 프로그램 종료
}
