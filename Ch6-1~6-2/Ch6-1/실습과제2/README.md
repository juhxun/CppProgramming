# 실습과제2

<img width="275" height="63" alt="image" src="https://github.com/user-attachments/assets/3157ac91-d276-49e5-a7fb-15c25ad8ca1c" />


```cpp
#include <iostream>
- iostream 라이브러리 포함
#include <string>
- string 클래스 사용
using namespace std;
- std 네임스페이스 사용
int big(int a, int b);
- 두 정수 중 큰 값을 반환하는 함수 선언
double big(double a, double b);
- 두 실수 중 큰 값을 반환하는 함수 선언
string big(string a, string b);
- 두 문자열 중 사전상 뒤에 오는 문자열 반환 함수 선언
int main() {
- 프로그램 시작점
    int x = big(10, 20);
- 정수 버전 big 함수 호출
    cout << "큰 정수값은 " << x << endl;
- 큰 정수값 출력
    double y = big(3.14, 1.05);
- 실수 버전 big 함수 호출
    cout << "큰 실수값은 " << y << endl;
- 큰 실수값 출력
    string z = big("hello", "world");
- 문자열 버전 big 함수 호출
    cout << "사전에서 뒤에 나오는 단어는 " << z << endl;
- 문자열 비교 결과 출력
    return 0;
- 프로그램 종료
}
int big(int a, int b) {
- 정수형 함수 정의
    return (a > b) ? a : b;
- 삼항 연산자를 이용해 큰 값 반환
}
double big(double a, double b) {
- 실수형 함수 정의
    return (a > b) ? a : b;
- 더 큰 실수 반환
}
string big(string a, string b) {
- 문자열 함수 정의
    return (a > b) ? a : b;
- 사전 순으로 더 뒤에 오는 문자열 반환
}
