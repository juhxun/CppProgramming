# 코드 설명

<img width="209" height="158" alt="image" src="https://github.com/user-attachments/assets/69bd5e50-fcf7-4881-98d1-eaa6a0b98c81" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Triangle {
- 삼각형 객체를 정의하는 클래스
	int width, height;
- 밑변과 높이 저장 변수 (기본 접근제어: private)
public:
- 외부에서 접근 가능한 멤버
	Triangle();
- 기본 생성자
	Triangle(int w, int h);
- 값을 받아 초기화하는 생성자
	~Triangle();
- 소멸자
	double getArea() { return (0.5 * width * height); }
- 삼각형 면적 계산 함수
};
Triangle::Triangle() :Triangle(1, 1) {}
- 기본 생성 시 (1,1)로 위임 생성자 호출
Triangle::Triangle(int w, int h) {
	width = w; height = h;
	cout << "밑변" << width << " 높이" << height << "인 삼각형 생성" << endl;
}
- 멤버 초기화 후 생성 메시지 출력
Triangle::~Triangle() {
	cout << "밑변" << width << " 높이" << height << "인 삼각형 소멸" << endl;
}
- 객체 소멸 시 메시지 출력
int main() {
- 프로그램 시작
	Triangle* pArray = new Triangle[3]{ Triangle(),Triangle(2,2),Triangle(4,4) };
- Triangle 객체 3개를 동적 배열로 생성
- 생성 순서: (1,1), (2,2), (4,4)
	Triangle* p = pArray;
- 배열의 시작 주소를 가리키는 포인터 p
	for (int i = 0; i < 3; i++) {
- 3개의 객체를 순회
		cout << "삼각형의 면적은 " << p->getArea() << '\n';
- 현재 객체의 면적 출력
		p++;
- 포인터를 다음 객체로 이동
	}
	delete[] pArray;
- 동적 배열 메모리 해제 (소멸자 역순 호출)
	return 0;
- 프로그램 종료
}
