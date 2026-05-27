# 실습과제3

<img width="193" height="97" alt="image" src="https://github.com/user-attachments/assets/92006a56-30b3-4365-a5b3-8fe23ada9026" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
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
    friend class ComplexManager;
};
class ComplexManager {
- 복소수 연산을 수행하는 클래스
public:
- 외부에서 접근 가능한 멤버
    Complex ComplexAdd(Complex a, Complex b) {
- 두 복소수를 더하는 함수
        Complex temp;
- 결과 저장용 복소수 객체 생성
        temp.real = a.real + b.real;
- 실수부 덧셈
        temp.img = a.img + b.img;
- 허수부 덧셈
        return temp;
- 결과 복소수 반환
    }
};
int main() {
- 프로그램 시작점
    Complex x(2, 3), y(-5, 10), sum;
- 복소수 객체 생성
    ComplexManager man;
- ComplexManager 객체 생성
    sum = man.ComplexAdd(x, y);
- x와 y를 더한 결과를 sum에 저장
    cout << "두 복소수의 합은 ";
    sum.show();
- 결과 복소수 출력
    return 0;
- 프로그램 종료
}
