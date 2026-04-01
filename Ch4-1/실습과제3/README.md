# 코드 설명

<img width="282" height="100" alt="image" src="https://github.com/user-attachments/assets/d8822861-c5f5-4068-a98c-ceff94a548d7" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Triangle {
- Triangle 클래스 정의
private:
- 외부에서 접근 불가능
    double a;
    - 삼각형의 밑변을 저장하는 변수
    double h;
    - 삼각형의 높이를 저장하는 변수
public:
- 외부에서 접근 가능
    Triangle() {
    - 기본 생성자
        this->a = 1;
        - 밑변을 1로 초기화
        this->h = 1;
        - 높이를 1로 초기화
    }
    Triangle(double b) {
    - 매개변수가 1개인 생성자
        this->a = b;
        - 전달받은 b 값을 밑변(a)에 저장
        this->h = 1;
        - 높이는 기본값 1로 설정
    }
    Triangle(double b, double h) {
    - 매개변수가 2개인 생성자
        this->a = b;
        - 전달받은 b 값을 밑변(a)에 저장
        this->h = h;
        - 전달받은 h 값을 높이에 저장
    }
    double getArea() {
    - 삼각형의 면적을 계산하는 함수
        return (this->a * this->h) / 2;
        - (밑변 × 높이) ÷ 2 공식으로 면적 반환
    }
};
int main() {
- 프로그램 실행 시작점
    Triangle tri1;
    - 기본 생성자를 이용해 tri1 객체 생성
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
    - tri1의 면적을 계산하여 출력
    Triangle tri2(10);
    - 밑변만 전달하는 생성자로 tri2 생성 (a=10, h=1)
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    - tri2의 면적을 계산하여 출력
    Triangle tri3(10, 2);
    - 밑변과 높이를 모두 전달하는 생성자로 tri3 생성 (a=10, h=2)
    cout << "삼각형의 면적은 " << tri3.getArea() << endl;
    - tri3의 면적을 계산하여 출력
    return 0;
    - 프로그램 정상 종료
}
