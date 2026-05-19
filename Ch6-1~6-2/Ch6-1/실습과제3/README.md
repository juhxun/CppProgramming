# 실습과제3

<img width="198" height="75" alt="image" src="https://github.com/user-attachments/assets/df2c83d3-83da-4a39-aa52-a85bc74ca0a7" />

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
    Rectangle() {
- 기본 생성자
- 매개변수가 없는 생성자
        width = 1;
- 폭을 1로 초기화
        height = 1;
- 높이를 1로 초기화
    }

    Rectangle(int w) {
- 매개변수 1개를 받는 생성자
        width = w;
- 폭을 전달받은 값으로 초기화
        height = 1;
- 높이는 기본값 1 사용
    }
    Rectangle(int w, int h) {
- 매개변수 2개를 받는 생성자
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
- 기본 생성자로 객체 생성
- width=1, height=1
    rect0.show();
- rect0 정보 출력
    Rectangle rect1(10);
- 매개변수 1개 생성자 호출
- width=10, height=1
    rect1.show();
- rect1 정보 출력
    Rectangle rect2(10, 20);
- 매개변수 2개 생성자 호출
- width=10, height=20
    rect2.show();
- rect2 정보 출력
    return 0;
- 프로그램 종료
}
