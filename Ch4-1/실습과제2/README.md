# 코드 설명

<img width="183" height="31" alt="image" src="https://github.com/user-attachments/assets/f4123d0e-8cd0-4288-9e1b-b4dd2d169523" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Triangle {
- 삼각형 객체를 정의하는 클래스
private:
- 외부에서 접근 불가능
double width, height;
- 밑변과 높이 저장
public:
- 외부에서 접근 가능한 멤버
Triangle(double w, double h);
- 값을 받아 초기화하는 생성자
Triangle();
- 기본 생성자
~Triangle();
- 소멸자
double getWidth();
- width 반환
double getHeight();
- height 반환
double getArea();
- 면적 계산
void setWidth(double w);
- width 설정
void setHeight(double h);
- height 설정
};
Triangle::Triangle(double w, double h) : width(w), height(h) {}
- 초기화 리스트로 width, height 설정
Triangle::Triangle() : Triangle(1, 1) {}
- 기본 생성 시 (1,1)로 초기화
Triangle::~Triangle() {}
- 소멸자
double Triangle::getWidth() {
    return width;
}
- width 값 반환
double Triangle::getHeight() {
    return height;
}
- height 값 반환
double Triangle::getArea() {
    return width * height / 2;
}
- 삼각형 면적 계산
void Triangle::setWidth(double w) {
    width = w;
}
- width 값 변경
void Triangle::setHeight(double h) {
    height = h;
}
- height 값 변경
int main(void) {
- 프로그램 시작점
    Triangle* tri = new Triangle;
- 동적 할당으로 Triangle 객체 생성 (기본 생성자 호출, 초기값 1,1)
- tri는 객체의 주소를 가리키는 포인터
    tri->setWidth(3);
- 포인터를 통해 width를 3으로 설정
    tri->setHeight(5);
- height를 5로 설정
    cout << "삼각형의 면적은 " << tri->getArea() << endl;
- 면적 출력 (3×5÷2 = 7.5)
    delete tri;
- 동적으로 생성한 객체 메모리 해제 (소멸자 호출)
    return 0;
- 프로그램 종료
}
