## 코드 설명
<img width="168" height="86" alt="image" src="https://github.com/user-attachments/assets/9f1a8820-5831-4861-9a4b-12b7708f4d7c" />

```cpp
#include <iostream>
- iostream을 포함한다.
using namespace std;

class Sphere { 
- Sphere 클래스를 선언한다.

public:
- 클래스 외부에서도 멤버 변수와 함수를 사용할 수 있도록 공개한다.

double r;
- 구의 반지름을 저장하는 멤버 변수

double getVolume();
- 구의 부피를 계산하여 반환하는 함수
double getArea();
- 구의 표면적을 계산하여 반환하는 함수

};

double Sphere::getVolume() {
- Sphere 클래스의 getVolume() 함수

return (4.0 / 3.0) * 3.14 * r * r * r;
- 구의 부피 공식 (4/3 × π × r³)을 이용하여 계산하고 반환한다.
}

double Sphere::getArea() {
- Sphere 클래스의 getArea() 함수

return 4 * 3.14 * r * r;
- 구의 표면적 공식 (4 × π × r²)을 이용하여 계산하고 반환한다.

}

int main() {
Sphere s;
- Sphere 클래스의 객체 s를 생성한다.

s.r = 3;
- 객체 s의 반지름 값을 3으로 설정한다.

cout << "구의 반지름: " << s.r << endl;
- 구의 반지름을 화면에 출력한다.

cout << "구의 부피: " << s.getVolume() << endl;
- getVolume() 함수를 호출하여 구의 부피를 출력한다.

cout << "구의 표면적: " << s.getArea() << endl;
- getArea() 함수를 호출하여 구의 표면적을 출력한다.
}
