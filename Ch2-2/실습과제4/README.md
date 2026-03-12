##코드 설명

```cpp

#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std:: 없이 cout, cin 바로 사용 가능

int main() {
- 프로그램 시작점
	double num[5];
- 실수형 5개를 저장할 배열 선언  
	double sum = 0;
- sum 변수 선언
	cout << "실수를 5개를 입력하시오 >>"; 
	
	for (int i = 0; i < 5; i++) {
- 0부터 4까지 반복문 실행
		cin >> num[i];
- 5번의 실수를 입력 받음
		sum += num[i];
- 입력 받은 값을 sum에 누적
	}

	cout << "양수 합은" << sum << "입니다."; 
- 입력 받음 실수의 합을 출력
return 0;
0을 반환 및 프로그램 종료
}
