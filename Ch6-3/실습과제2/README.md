# 실습과제2

<img width="143" height="51" alt="image" src="https://github.com/user-attachments/assets/748e9851-7751-40a1-9bc0-d871502761a8" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
class MyMath {
- 수학 관련 기능을 제공하는 클래스
public:
- 외부에서 접근 가능한 멤버
    static int GetMax(int arr[], int size) {
- static 함수
- 배열에서 최대값을 찾는 함수
- 객체 생성 없이 클래스명으로 호출 가능
        int maxVal = arr[0];
- 첫 번째 값을 최대값으로 초기화
        for (int i = 1; i < size; i++) {
- 배열 전체 반복
            if (arr[i] > maxVal) {
- 현재 값이 최대값보다 크면
                maxVal = arr[i];
- 최대값 변경
          }
        }
        return maxVal;
- 최종 최대값 반환
    }
    static int GetMin(int arr[], int size) {
- static 함수
- 배열에서 최소값을 찾는 함수
        int minVal = arr[0];
- 첫 번째 값을 최소값으로 초기화
        for (int i = 1; i < size; i++) {
- 배열 전체 반복
            if (arr[i] < minVal) {
- 현재 값이 최소값보다 작으면
                minVal = arr[i];
- 최소값 변경
            }
        }
        return minVal;
- 최종 최소값 반환
    }
};
int main() {
- 프로그램 시작
    int x[5] = { 20, 30, -5, 2, -30 };
- 정수 배열 선언 및 초기화
    cout << "최대값은 :" << MyMath::GetMax(x, 5) << endl;
- 클래스명::함수명 형태로 최대값 함수 호출
    cout << "최소값은 :" << MyMath::GetMin(x, 5) << endl;
- 최소값 함수 호출
    return 0;
- 프로그램 종료
}
