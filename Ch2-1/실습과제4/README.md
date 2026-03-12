## 코드 설명

```cpp
#include <iostream>
- iostream 라이브러리 포함

int main(void) {
- 프로그램 시작점

	for (int i = 0; i < 7; i++) {
	- 0에서 6까지 반복문 실행(행)
		for (int j = 0; j < 7; j++)
	- 0에서 6까지 반목문 실행(열)	
			if (i == j || i + j == 6) {		
				std::cout << "*";
	- 만약 i와j가 같거나 i+j가 6이랑 같으면 * 출력			
			}
			else
			{
				std::cout << " ";
    - 위 조건에 맞지 않으면 공백 출력 
			}
		std::cout << "\n";
   - 행 반복문이 끝나면 줄바꿈 
	}
	return 0;
	0을 반환 및 프로그램 종료
}
