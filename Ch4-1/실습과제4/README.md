# 코드설명


```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Triangle {
- Triangle 클래스 정의
private:
- 외부에서 접근 가능
    int a;
    - 삼각형의 밑변을 저장하는 변수
    int h;
    - 삼각형의 높이를 저장하는 변수
public:
- 외부에서 접근 가능
    Triangle(int a = 1, int h = 1) {
    - 생성자 정의 (기본값: 밑변 1, 높이 1)
        this->a = a;
        - 전달받은 a 값을 멤버 변수에 저장
        this->h = h;
        - 전달받은 h 값을 멤버 변수에 저장
        cout << "밑변" << this->a << ",높이" << this->h << "인 삼각형 생성" << endl;
        - 객체 생성 시 밑변과 높이를 출력
    }

    ~Triangle() {
    - 소멸자 정의
        cout << "밑변" << this->a << ",높이" << this->h << "인 삼각형 소멸" << endl;
        - 객체 소멸 시 밑변과 높이를 출력
    }

    int getArea() {
    - 삼각형의 면적을 계산하는 함수
        return (this->a * this->h) / 2;
        - (밑변 × 높이) ÷ 2 계산 결과 반환
    }
};
int main() {
- 프로그램 실행 시작점
    Triangle tri[3] = { Triangle(2,2), Triangle(4,4), Triangle(6,6) };
    - Triangle 객체 3개를 정적 배열로 생성 (스택 메모리에 생성)
    for (int i = 0; i < 3; i++) {
    - 배열의 반복문
        cout << "삼각형" << i << "의 면적은 " << tri[i].getArea() << endl;
        - 각 삼각형의 면적을 계산하여 출력
    }
    return 0;
    - 프로그램 정상 종료

}

