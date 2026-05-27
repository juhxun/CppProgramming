# 실습과제2

<img width="194" height="100" alt="image" src="https://github.com/user-attachments/assets/f93d2042-0d14-4b61-abb2-56d347db0fbd" />

```cpp
#include <iostream>
- 입출력을 위한 iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
class Complex {
- 복소수 객체를 정의하는 클래스
    int real;
- 실수부 저장 변수
    int img;
- 허수부 저장 변수
public:
- 외부에서 접근 가능한 멤버
    Complex(int r = 0, int i = 0) {
- 생성자 정의
        real = r;
- 실수부 초기화
        img = i;
- 허수부 초기화
        cout << "복소수 " << real << "+" << img << "j 생성" << endl;
- 생성된 복소수 출력
    }
    void show() {
- 복소수 출력 함수
        cout << real << "+" << img << "j" << endl;
- 복소수 형태 출력
    }
    friend Complex ComplexAdd(Complex a, Complex b);
- friend 함수 선언
};
Complex ComplexAdd(Complex a, Complex b) {
- 두 복소수를 더하는 friend 함수 정의
    Complex tmp;
- 결과 저장용 객체 생성
    tmp.real = a.real + b.real;
- 실수부 덧셈
    tmp.img = a.img + b.img;
- 허수부 덧셈
    return tmp;
- 결과 복소수 반환
}
int main() {
- 프로그램 시작점
    Complex x(2, 3), y(-5, 10), sum;
- 복소수 객체 생성
    sum = ComplexAdd(x, y);
- friend 함수를 이용해 두 복소수 덧셈
    cout << "두 복소수의 합은 ";
    sum.show();
- 결과 복소수 출력
    return 0;
- 프로그램 종료
}
