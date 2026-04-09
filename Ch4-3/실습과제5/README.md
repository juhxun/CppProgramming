# 코드 설명



```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Sphere {
- 구 객체를 정의하는 클래스
	int radius;
- 반지름 저장 변수
public:
- 외부에서 접근 가능한 멤버
	Sphere();
- 기본 생성자
	~Sphere() {}
- 소멸자
	void setRadius(int r) { radius = r; }
- 반지름 설정 함수
	double getArea() { return 3.14 * radius * radius * radius * 4 / 3; }
- 구의 부피 계산 함수
};
Sphere::Sphere() {
	radius = 1;
}
- 기본 생성 시 반지름을 1로 초기화
int main() {
- 프로그램 시작점
	cout << "생성하고자 하는 구의 개수: ";
	int n, radius;
- n: 구의 개수, radius: 입력 받을 반지름
	cin >> n;
- 구의 개수 입력
	Sphere* pArray = new Sphere[n];
- Sphere 객체 배열을 동적 할당 (기본 생성자 n번 호출됨)
	for (int i = 0; i < n; i++) {
- n개의 구에 대해 반복
		cout << "구" << i + 1 << "의 반지름: ";
		cin >> radius;
- 반지름 입력
		(pArray + i)->setRadius(radius);
- 포인터 연산으로 i번째 객체 접근 후 반지름 설정
	}
	for (int j = 0; j < n; j++) {
- 각 구의 부피 출력 반복
		cout << "구" << j + 1 << "의 부피: " << (pArray + j)->getArea() << endl;
- 각 객체의 부피 계산 후 출력
	}
	delete[] pArray;
- 동적 할당한 객체 배열 메모리 해제 (소멸자 n번 호출)
	return 0;
- 프로그램 종료
}
