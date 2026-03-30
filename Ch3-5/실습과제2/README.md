# 코드 설명
<img width="327" height="154" alt="image" src="https://github.com/user-attachments/assets/bd29dbaf-c019-4f0f-9f84-fc8e37f386e6" />

```cpp

#include <iostream>
- iostream라이브러리 포함.
using namespace std;
class Triangle {
- 삼각형 클래스 정의
private:
    double width;
- 삼각형의 폭 변수 선언
    double height;
- 삼각형의 높이 변수 선언
public:
    Triangle(double w, double h) : width(w), height(h) {
        cout << "폭" << width << ",높이" << height << "인 삼각형 생성" << endl;
    }
- 멤버 초기화 및 객체 생성시 자동 호출
    ~Triangle() {
        cout << "폭" << width << ",높이" << height << "인 삼각형 소멸" << endl;
    }
- 객체가 소멸될 때 자동 호출
    double area() {
        return width * height / 2.0;
- 클래스 내부 정의로 자동 인라인 함수
    }
};

int main() {
    Triangle t1(1, 1);

    Triangle t2(3, 5);
    cout << "삼각형의 면적은 " << t2.area() << endl;
- 폭1, 높이1 삼각형 생성
- 폭3, 높이5 삼각형 생성
- t2 면적 계산 후 출력 (7.5)
    return 0;
- 프로그램 종료
}
