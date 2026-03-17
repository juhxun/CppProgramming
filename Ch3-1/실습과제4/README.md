## 코드 설명

<img width="186" height="101" alt="image" src="https://github.com/user-attachments/assets/bc2ac2b0-7ace-4cc2-9500-2763ff185d89" />

```cpp
#include <iostream>
- iostream 라이브러리를 포함한다.
using namespace std;
class Rectangle {
- Rectangle 클래스 선언
public:
int x = 1;
- 좌측 상단 x 좌표를 1로 설정한다.
int y = 2;
- 좌측 상단 y 좌표를 2로 설정한다.
int width = 3;
- 사각형 가로 길이 3으로 설정한다.
int height = 4;
- 사각형 세로 길이를 4로 설정한다.
int getArea() {
- 사각형 면적을 계산하여 반환하는 함수
return width * height;
- 면적 = 가로 × 세로
int A() {
- 사각형 둘레를 계산하여 반환하는 함수
return 2 * (width + height);
- 둘레 = 2 × (가로 + 세로)
void B() {
- 우측 하단 좌표를 계산하고 화면에 출력하는 함수
int bx = x + width;
- 우측 하단 x 좌표 = 좌측 상단 x + 가로 길이
int by = y - height;
- 우측 하단 y 좌표 = 좌측 상단 y - 세로 길이 (아래 방향)
cout << "우측 하단 좌표: (" << bx << "," << by << ")" << endl;
- 계산된 우측 하단 좌표를 화면에 출력
int main() {
Rectangle rect;
- Rectangle 클래스의 객체 rect를 생성한다.
cout << "좌측 상단 좌표: (" << rect.x << "," << rect.y << ")" << endl;
- 좌측 상단 좌표를 화면에 출력한다.
cout << "사각형의 면적: " << rect.getArea() << endl;
- getArea() 함수를 호출하여 사각형 면적을 화면에 출력한다.
cout << "사각형의 둘레: " << rect.A() << endl;
- A() 함수를 호출하여 사각형 둘레를 화면에 출력한다.
rect.B();
- B() 함수를 호출하여 우측 하단 좌표를 화면에 출력한다.

