# 실습과제2

<img width="207" height="64" alt="image" src="https://github.com/user-attachments/assets/cd3a3a4f-7a16-4354-bebd-0c53eeef943f" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
class Rectangle {
- 사각형(Rectangle) 객체를 정의하는 클래스
private:
- 외부에서 접근 불가
    int width;
- 사각형의 폭 저장 변수
    int height;
- 사각형의 높이 저장 변수
public:
- 외부에서 접근 가능한 멤버
    Rectangle(int w = 1, int h = 1) {
- 생성자 정의
- 기본 매개변수 사용
        width = w;
- 폭 초기화
        height = h;
- 높이 초기화
    }
    void show() {
- 사각형 정보 출력 함수
        cout << "사각형 폭은 " << width
             << " 높이는 " << height << endl;
- 폭과 높이 출력
    }
};
int main() {
- 프로그램 시작점
    Rectangle rect0;
- 매개변수 없이 객체 생성
- 기본값 사용 → width=1, height=1
    rect0.show();
- rect0 정보 출력
    Rectangle rect1(10);
- width만 전달
    rect1.show();
- rect1 정보 출력
    Rectangle rect2(10, 20);
- width와 height 모두 전달
    rect2.show();
- rect2 정보 출력
    return 0;
- 프로그램 종료
}
