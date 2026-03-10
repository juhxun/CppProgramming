## 코드 설명

```cpp
#include <iostream>
- iostream 라이브러리 포함, std::cout 사용 가능

int main(void)
- 프로그램 시작점

for (int i = 0; i < 7; i++)
- 0부터 6까지 반복하는 외부 반복문 (행)

for (int j = 0; j < 7; j++)
- 0부터 6까지 반복하는 내부 반복문 (열)

if (i == j || i + j == 6)
- 대각선 조건: 좌상-우하(i==j), 좌하-우상(i+j==6)

std::cout << "*";
- 조건 만족 시 '*' 출력

else
std::cout << " ";
- 조건 불만족 시 공백 출력

std::cout << "\n";
- 한 행이 끝나면 줄바꿈

return 0;
- 0을 반환하며 프로그램 종료
