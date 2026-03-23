# 코드 설명
<img width="257" height="137" alt="image" src="https://github.com/user-attachments/assets/5c443af8-238b-4897-b0a6-c4d3116b9bf4" />

```cpp
#include <iostream>
- *iostream 라이브러리 포함
using namespace std;
class Triangle {
- 삼각형 객체 클래스
public:
- 외부에서 접근 가능
double w, h;
- 삼각형의 밑변과 높이를 저장하는 멤버 변수
double getArea();
- 삼각형의 면적을 계산하는 멤버 함수 선언
Triangle(double _w, double _h);
- 밑변과 높이를 전달받아 초기화하는 생성자 선언
Triangle();
- 기본 생성자 선언
~Triangle();
- 소멸자 선언 (객체가 소멸될 때 자동 호출)
};
double Triangle::getArea() {
	return w * h / 2;
}
- 삼각형 면적 공식으로 계산 후 반환
Triangle::Triangle(double _w, double _h) : w(_w), h(_h) {
	cout << "밑변 " << _w << "높이 " << _h << "인 삼각형 객체 생성" << endl;
}
- 멤버 초기화 리스트로 w, h 설정 후 생성 메시지 출력
Triangle::Triangle() : Triangle(1, 1) {}
- 위임 생성자: 기본 생성 시 (1,1) 값으로 다른 생성자 호출
Triangle::~Triangle() {
	cout << "밑변 " << w << "높이 " << h << "인 삼각형 객체 소멸" << endl;
}
- 객체 소멸 시 호출되며 정보 출력
int main(void) {
- 프로그램 실행 시작점
	Triangle tri1;
- 기본 생성자로 tri1 생성 (w=1, h=1)
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
- tri1의 면적 출력
	Triangle tri2(2, 4);
- 매개변수 생성자로 tri2 생성 (w=2, h=4)
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
- tri2의 면적 출력
	return 0;
- 프로그램 종료
}
