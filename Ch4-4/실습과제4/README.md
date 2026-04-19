# 실습과제 3

<img width="211" height="78" alt="image" src="https://github.com/user-attachments/assets/dd16dc90-966b-457a-959b-095bdb4690f2" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
#include <string>
- string 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
int main(void)
- 프로그램 시작점
{
	int num;
- 물품 개수 저장 변수
	cout << "구입할 물품의 개수>>";
	cin >> num;
- 물품 개수 입력
	int* price = new int[num];
- 크기가 num인 정수 배열 동적 할당
	if (!price) { cout << "no"; return -1; }
- 메모리 할당 실패 시 종료
	cout << "물품" << num << "개의 가격입력>>";
	cin >> price[0];
- 첫 번째 가격 입력
	int max = price[0], min = price[0];
- 최대값과 최소값을 첫 번째 값으로 초기화
	for (int i = 1; i < num; i++) {
- 두 번째 요소부터 반복
		cin >> price[i];
- 가격 입력
		if (max < price[i]) max = price[i];
- 현재 값이 더 크면 max 갱신
		if (min > price[i]) min = price[i];
- 현재 값이 더 작으면 min 갱신
	}
	cout << "제일 싼 가격은 " << min<<"\n";
- 최소값 출력
	cout << "제일 비싼 가격은 " << max;
- 최대값 출력
	delete[]price;
- 동적 할당한 배열 메모리 해제
	return 0;
- 프로그램 종료
}
```



```cpp

