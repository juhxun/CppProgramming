# 실습과제 4

<img width="159" height="32" alt="image" src="https://github.com/user-attachments/assets/592678bb-422d-4645-b092-962e50d2f1bf" />


```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
class Circle {
- 원 객체를 정의하는 클래스
    int radius;
- 원의 반지름 저장 변수
public:
- 외부에서 접근 가능
    Circle(int radius) {
- 생성자 정의
        this->radius = radius;
- 매개변수 radius 값을 멤버 변수에 저장
    }
    Circle& plus(int n) {
- 반지름을 증가시키는 함수
        radius += n;
- 반지름 증가
        return *this;
- 현재 객체 자신 반환
    }
    Circle& minus(int n) {
- 반지름을 감소시키는 함수
        radius -= n;
- 반지름 감소
        return *this;
- 현재 객체 자신 반환
    }
    int getRadius() {
- 반지름 반환 함수
        return radius;
- 현재 반지름 반환
    }
};
int main() {
- 프로그램 시작점
    Circle a(5);
- 반지름이 5인 Circle 객체 생성
    a.plus(1).plus(2).plus(3)
        .minus(3).minus(2).minus(1).minus(5);
- 참조 반환을 이용한 연속 함수 호출
    cout << "객체 a의 반지름은 " << a.getRadius();
- 최종 반지름 출력
    return 0;
- 프로그램 종료
}
