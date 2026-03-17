## 코드설명
<img width="162" height="57" alt="image" src="https://github.com/user-attachments/assets/0cbff1b9-7702-42b1-ac3c-9aeb4420449f" />

```cpp
#include <iostream>
- iostream 라이브러리를 포함한다.
using namespace std;

class Triangle { // Triangle 클래스 선언부
- Triangle 클래스를 선언
public:
- 접근 권한을 공개
int x;
- 삼각형의 밑변 값을 저장하는 변수
int y;
- 삼각형의 높이 값을 저장하는 변수
double getArea();
- 삼각형의 면적을 계산하여 반환하는 함수
};

double Triangle::getArea() { 
- Triangle 클래스에 속한 getArea() 함수를 구현
return 0.5 * x * y;
- 삼각형 면적 공식 (1/2 × 밑변 × 높이)로 면적을 계산하여 반환한다.
}
int main() {
Triangle tri;
- Triangle 클래스의 객체 tri를 생성한다.
tri.x = 3;
- 객체 tri의 밑변 값을 3으로 설정한다.
tri.y = 5;
- 객체 tri의 높이 값을 5로 설정한다.
cout << "삼각형의 면적은 " << tri.getArea() << endl;
- getArea 함수를 호출하여 계산된 삼각형의 면적을 화면에 출력한다.
}
