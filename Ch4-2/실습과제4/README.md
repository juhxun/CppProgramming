# 코드 설명

<img width="278" height="103" alt="image" src="https://github.com/user-attachments/assets/c78b56d4-acd4-48fd-a10e-5697207d7d6f" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
int main() {
- 프로그램 시작점
    int n;
- 입력할 실수의 개수 저장 변수
    double* arr;
- 실수 배열 포인터 선언
    cout << "입력할 실수의 개수를 입력하세요: ";
    cin >> n;
    arr = new double[n];
- 크기가 n인 double 배열을 동적 할당
    cout << n << "개의 실수를 입력 하시오." << endl;
    for (int i = 0; i < n; i++) {
- n번 반복하여 값 입력
        cin >> arr[i];
- 배열 각 요소에 실수 저장
    }
    double max = arr[0];
- 첫 번째 값을 기준으로 최대값 초기화
    for (int i = 1; i < n; i++) {
- 두 번째 요소부터 끝까지 비교
        if (arr[i] > max) {
- 현재 값이 max보다 크면
            max = arr[i];
- max 값을 갱신
        }
    }
    cout << "최대값은 " << max << "입니다" << endl;
- 최종 최대값 출력
    delete[] arr;
- 동적 할당한 배열 메모리 해제
    return 0;
- 프로그램 종료
}
