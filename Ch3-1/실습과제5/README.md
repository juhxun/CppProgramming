## 코드설명
<img width="314" height="117" alt="image" src="https://github.com/user-attachments/assets/664cc317-0422-4f0b-bcb0-8d92bb0c4455" />

```cpp
#include <iostream>
- iostream 라이브러리를 포함한다.

using namespace std;

class Rectangle {
- Rectangle 클래스를 선언
public:
int x;
- 좌측 상단 x 좌표를 저장하는 변수
int y;
- 좌측 상단 y 좌표를 저장하는 변수
int width;
- 사각형의 가로 길이를 저장하는 변수
int height;
- 사각형의 세로 길이를 저장하는 변수
Rectangle() {
x = 1;
- x 좌표를 1로 설정한다.
y = 2;
- y 좌표를 2로 설정한다.
width = 3;
- 가로 길이를 3으로 설정한다.
height = 4;
- 세로 길이를 4로 설정한다.
void setData() {
- 키보드 입력을 받아 멤버 변수 값을 바꾸는 함수이다.
cout << "사각형의 좌측상단좌표(x,y) : ";
- 사용자에게 좌측 상단 좌표 입력 안내문을 출력한다.
cin >> x >> y;
- 입력받은 두 정수를 x와 y에 각각 저장한다.
cout << "사각형의 폭과 높이(width,height) : ";
cin >> width >> height;
- 입력받은 값을 width와 height에 저장
int getArea() {
- 사각형의 면적을 계산하여 반환하는 함수
return width * height;
- 면적 = 가로 × 세로
int P() {
- 사각형의 둘레를 계산하여 반환하는 함수
return 2 * (width + height);
- 둘레 = 2 × (가로 + 세로)
void b() {
- 우측 하단 좌표를 계산하고 바로 화면에 출력하는 함수
int bx = x + width;
- 우측 하단 x 좌표 = 좌측 상단 x + 가로 길이
int by = y - height;
- 우측 하단 y 좌표 = 좌측 상단 y - 세로 길이 (아래 방향)
cout << "사각형의 우측하단의 좌표는 (" << bx << ", " << by << ")" << endl;
- 계산된 우측 하단 좌표를 화면에 출력
int main() {
- 프로그램 실행이 시작되는 메인 함수
Rectangle rect;
- Rectangle 클래스의 객체 rect를 생성
rect.setData();
- 키보드 입력으로 사각형의 좌표와 크기를 설정
cout << "사각형의 면적은 " << rect.getArea() << endl;
- getArea() 함수를 호출하여 사각형 면적을 화면에 출력
cout << "사각형의 둘레길이는 " << rect.P() << endl;
- P() 함수를 호출하여 사각형 둘레를 화면에 출력
rect.b();
- b() 함수를 호출하여 우측 하단 좌표를 화면에 출력
