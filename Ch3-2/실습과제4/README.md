# 코드 설명
<img width="262" height="88" alt="image" src="https://github.com/user-attachments/assets/c252eb8a-4636-4540-9d95-5f4203678dbc" />

```cpp
#include <iostream>  
- iostream 라이브러리 포함
using namespace std;  
class Rectangle { ... };  
- Rectangle 클래스 정의
public:  
int x, y;  
- 사각형 좌측 상단 좌표를 저장하는 멤버 변수
int width, height;  
- 사각형의 너비와 높이를 저장하는 멤버 변수
Rectangle(int x, int y, int w, int h) : x(x), y(y), width(w), height(h) {}  
- 타겟 생성자: 좌표와 크기를 전달받아 멤버 초기화
Rectangle(int w, int h) : Rectangle(0, 0, w, h) {}  
- 위임 생성자: 좌표 (0,0)를 기본값으로 하여 타겟 생성자 호출
int getArea() { return width * height; }  
- 사각형 면적을 계산하여 반환
int getPerimeter() { return 2 * (width + height); }  
- 사각형 둘레를 계산하여 반환
void printBottomRight() { cout << "(" << x + width << ", " << y + height << ")"; }  
- 우측 하단 좌표를 계산하여 출력
int main() { ... }  
- 프로그램의 실행 시작점
Rectangle rect1(1, 1);  
- 좌표와 크기 지정하여 rect1 객체 생성
Rectangle rect2(1, 1);  
- 좌표와 크기 지정하여 rect2 객체 생성
Rectangle rect3(2, 0, 3, 1);  
- 좌표와 크기 지정하여 rect3 객체 생성
cout << "rect1의 면적은 " << rect1.getArea() << endl;  
- rect1의 면적 출력
cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;  
- rect2의 둘레 출력
cout << "rect3의 우측하단의 좌표는 ";  
- rect3 우측 하단 좌표 출력 준비
rect3.printBottomRight();  
- rect3 우측 하단 좌표 출력
cout << endl;  
- 줄 바꿈
return 0;  
- 0 반환 프로그램 종료
