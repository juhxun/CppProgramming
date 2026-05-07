# 실습과제4

<img width="205" height="59" alt="image" src="https://github.com/user-attachments/assets/df291cd2-ab78-44db-b1df-c816d835994e" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
void get_parts(double a, int& b, double& c);
- 실수의 정수부와 소수부를 구하는 함수 선언
- b, c는 참조 전달
int main() {
- 프로그램 시작점
    double n;
- 입력받을 실수 변수
    int i;
- 정수부 저장 변수
    double d;
- 소수부 저장 변수
    cout << "실수를 입력하시오 : ";
    cin >> n;
- 실수 입력
    get_parts(n, i, d);
- 실수를 함수에 전달하여 정수부와 소수부 계산
    cout << "정수부 : " << i << endl;
- 정수부 출력
    cout << "소수부 : " << d << endl;
- 소수부 출력
    return 0;
- 프로그램 종료
}
void get_parts(double a, int& b, double& c) {
- 실수 분리 함수 정의
    b = (int)a;
- 실수를 정수형으로 형변환
    c = a - b;
- 원래 값 - 정수부
}
