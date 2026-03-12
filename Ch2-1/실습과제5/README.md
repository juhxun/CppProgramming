## 코드 설명
<img width="47" height="103" alt="image" src="https://github.com/user-attachments/assets/ccb1221a-5817-45df-b89f-64f5edf7923f" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
int main(void) {
- 프로그램 시작점
	for (int i = 0; i < 4; i++) {
- 0 에서 3까지 반복문 실행
		for (int j = 0; j <= i; j++) {
				std::cout << "*";
- j가 0으로 시작하고 j가 i보다 작거나 같으면 j에 1을 더해주고 별을 출력
		}
		std::cout << "\n";
- 위 반복문이 끝나면 줄바꿈    
	}
	return 0;
- 0을 반환 및 프로그램 종료
}
