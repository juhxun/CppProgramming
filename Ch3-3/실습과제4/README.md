# 코드 설명
<img width="159" height="131" alt="image" src="https://github.com/user-attachments/assets/af451a3a-1684-4ef6-819b-45061c98f7a7" />

```cpp

#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Sphere {
- 구 객체 클래스
public:
- 외부에서 접근 가능한 멤버
double r;
- 구의 반지름 저장 변수
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
- 초기화 리스트로 반지름 설정 후 생성 메시지 출력
Sphere::Sphere() : Sphere(1) {}
- 기본 생성자: 반지름 1로 위임 생성자 호출
Sphere::~Sphere() {
    cout << "반지름 " << r << "인 구 소멸" << endl;
}
- 객체 소멸 시 호출되어 정보 출력
int main() {
- 프로그램 시작점
    Sphere sph1;
- 기본 생성자로 sph1 생성
    cout << "구의 부피는 " << sph1.getVolume() << endl;
- sph1의 부피 출력
    Sphere sph2(3);
- 매개변수 생성자로 sph2 생성
    cout << "구의 부피는 " << sph2.getVolume() << endl;
- sph2의 부피 출력
    return 0;
- 프로그램 종료
}


