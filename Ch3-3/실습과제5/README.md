# 코드 설명
<img width="162" height="120" alt="image" src="https://github.com/user-attachments/assets/ad9d60a8-b43c-472b-96a4-b62d49d5df8b" />

## 실행결과가 다른 이유를 설명하라
- **지역 객체**는 main()함수 안에서 객체 생성 / **전역 객체**는 main()함수 밖에서 main()함수 실행 전에 생성되어 생성 시점이 다름.
> `소멸은 역순으로 진행`

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Sphere {
- 구 객체 클래스
public:
- 외부에서 접근 가능
double r;
- 반지름 저장 변수
Sphere();
- 기본 생성자 선언
Sphere(double _r);
- 반지름을 받아 초기화하는 생성자
~Sphere();
- 소멸자 선언
double getVolume();
- 구의 부피를 계산하는 함수 선언
};
double Sphere::getVolume() {
    return 4.0 / 3.0 * 3.14 * r * r * r;
}
- 구의 부피 공식 (4/3 × π × r³)으로 계산 후 반환
Sphere::Sphere(double _r) : r(_r) {
    cout << "반지름 " << r << "인 구 생성" << endl;
}
- 객체 생성 시 반지름 출력
Sphere::Sphere() : Sphere(1) {}
- 기본 생성 시 반지름 1로 위임 생성자 호출
Sphere::~Sphere() {
    cout << "반지름 " << r << "인 구 소멸" << endl;
}
- 객체 소멸 시 반지름 출력
Sphere sph1(10);
- 전역 객체 선언 → main 실행 전에 생성 (r=10)
Sphere sph2(20);
- 전역 객체 선언 → main 실행 전에 생성 (r=20)
int main() {
- 프로그램 시작점
    cout << "구의 부피는 " << sph1.getVolume() << endl;
- sph1의 부피 출력 (약 4186.66)
    cout << "구의 부피는 " << sph2.getVolume() << endl;
- sph2의 부피 출력 (약 33493.33)
    return 0;
- 프로그램 종료
}

