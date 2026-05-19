# 실습과제4

<img width="211" height="87" alt="image" src="https://github.com/user-attachments/assets/af78d3ef-bac4-4a83-9b7f-dfd53634d582" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
class Point3D {
- 3차원 좌표를 표현하는 클래스
private:
- 외부에서 접근 불가
    int x, y, z;
- x, y, z 좌표 저장 변수
public:
- 외부에서 접근 가능한 멤버
    Point3D() {
- 기본 생성자
        x = 0;
- x 좌표를 0으로 초기화
        y = 0;
- y 좌표를 0으로 초기화
        z = 0;
- z 좌표를 0으로 초기화
    }
    Point3D(int a) {
- 매개변수 1개 생성자
        x = a;
- x 좌표 초기화
        y = 0;
- y 좌표는 0 사용
        z = 0;
- z 좌표는 0 사용
    }
    Point3D(int a, int b) {
- 매개변수 2개 생성자
        x = a;
- x 좌표 초기화
        y = b;
- y 좌표 초기화
        z = 0;
- z 좌표는 0 사용
    }
    Point3D(int a, int b, int c) {
- 매개변수 3개 생성자
        x = a;
- x 좌표 초기화
        y = b;
- y 좌표 초기화
        z = c;
- z 좌표 초기화
    }
    void show() {
- 좌표 출력 함수
        cout << "3차원 점의 좌표는 ("
             << x << "," << y << "," << z << ")"
             << endl;
- 현재 좌표 출력
    }
};
int main() {
- 프로그램 시작점
    Point3D p0;
- 기본 생성자 호출
    p0.show();
- p0 좌표 출력
    Point3D p1(1);
- 매개변수 1개 생성자 호출
    p1.show();
- p1 좌표 출력
    Point3D p2(1, 2);
- 매개변수 2개 생성자 호출
    p2.show();
- p2 좌표 출력
    Point3D p3(1, 2, 3);
- 매개변수 3개 생성자 호출
    p3.show();
- p3 좌표 출력
    return 0;
- 프로그램 종료
}
