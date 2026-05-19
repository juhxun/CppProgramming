# 실습과제3

<img width="203" height="78" alt="image" src="https://github.com/user-attachments/assets/ae2abf88-7fe3-41c7-a1be-31451dc9b940" />

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
    Point3D(int a = 0, int b = 0, int c = 0) {
- 생성자 정의
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
- 매개변수 없이 객체 생성
    p0.show();
- p0 좌표 출력
    Point3D p1(1);
- x 값만 전달
    p1.show();
- p1 좌표 출력

    Point3D p2(1, 2);
- x, y 값 전달
    p2.show();
- p2 좌표 출력
    Point3D p3(1, 2, 3);
- x, y, z 모두 전달
    p3.show();
- p3 좌표 출력
    return 0;
- 프로그램 종료
}
