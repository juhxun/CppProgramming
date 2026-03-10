## 코드 설명

```cpp
#include <iostream>
- iostream 라이브러리 포함, std::cout 사용 가능

int main(void)
- 프로그램 시작점

for (int i = 0; i < 4; i++)
- 0부터 3까지 반복하는 외부 반복문 (행)

for (int j = 0; j <= i; j++)
- 0부터 i까지 반복하는 내부 반복문 (열)

std::cout << "*";
- '*' 출력, 한 행에서 i+1개 출력

std::cout << "\n";
- 한 행이 끝나면 줄바꿈

return 0;
- 0을 반환하며 프로그램 종료
