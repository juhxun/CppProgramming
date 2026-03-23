# 코드 설명
<img width="213" height="133" alt="image" src="https://github.com/user-attachments/assets/8fa2dfbb-e53c-4bd0-ae3e-94efbfd8eb57" />

## 실행결과가 다른 이유를 설명하라
- **지역 객체**는 main()함수 안에서 객체 생성 / **전역 객체**는 main()함수 밖에서 main()함수 실행 전에 생성되어 생성 시점이 다름.
> `소멸은 역순으로 진행`


```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Triangle {
- 삼각형 객체 클래스
public:
- 외부에서 접근 가능
double w, h;
- 밑변(w), 높이(h) 저장
double getArea();
- 삼각형 면적 계산 함수 선언
Triangle(double _w, double _h);
- 값을 받아 초기화하는 생성자
Triangle();
- 기본 생성자
~Triangle();
- 소멸자
};
double Triangle::getArea() {
    return w * h / 2;
}
- 삼각형 면적 공식으로 계산 후 반환
Triangle::Triangle(double _w, double _h) : w(_w), h(_h) {
    cout << "밑변 " << _w << "높이 " << _h << "인 삼각형 생성" << endl;
}
- 멤버 초기화 후 생성 메시지 출력
Triangle::Triangle() : Triangle(1, 1) {}
- 기본 생성 시 (1,1)로 위임 생성자 호출
Triangle::~Triangle() {
    cout << "밑변 " << w << "높이 " << h << "인 삼각형 소멸" << endl;
}
- 객체 소멸 시 호출되어 정보 출력
Triangle tri1(4, 8);
- 전역 객체 생성 → main 실행 전에 생성됨 (w=4, h=8)
Triangle tri2(2, 2);
- 전역 객체 생성 → main 실행 전에 생성됨 (w=2, h=2)
int main(void) {
- 프로그램 시작점
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
- tri2의 면적 출력 (2×2÷2 = 2)
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
- tri1의 면적 출력 (4×8÷2 = 16)
    return 0;
- 프로그램 종료 
}
