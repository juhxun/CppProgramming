# 코드 설명
<img width="282" height="107" alt="image" src="https://github.com/user-attachments/assets/103dd945-647c-4441-8d10-154d91718fc0" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
int main() {
- 프로그램 시작점
    int n, sum = 0;
- n: 입력할 정수 개수, sum: 총합 (0으로 초기화)
    int* arr;
- 정수 배열을 가리킬 포인터 선언
    cout << "입력할 정수의 개수를 입력하세요: ";
    cin >> n;
- 정수 개수 입력받음
    arr = new int[n];
- 크기가 n인 정수 배열을 동적 할당
    cout << n << "개의 정수를 입력 하시오." << endl;
    for (int i = 0; i < n; i++) {
- n번 반복하여 값 입력
        cin >> arr[i];
- 배열 각 요소에 값 저장
        sum += arr[i];
- 입력값을 sum에 누적
    }
    cout << "평균값은 " << sum / n << "입니다" << endl;
- 평균 출력
    delete[] arr;
- 동적 할당한 배열 메모리 해제
    return 0;
- 프로그램 종료
}
