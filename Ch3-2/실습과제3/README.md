# 코드 설명
<img width="151" height="71" alt="image" src="https://github.com/user-attachments/assets/a1db962f-4b0a-4bfa-ae23-03c14d013f70" />

```cpp
#include <iostream>  
- iostream 라이브러리 포함
using namespace std;  
class Sphere { ... };  
- Sphere 클래스 정의
public:  
- 아래 멤버들은 외부에서 접근 가능
double radius, volume;  
- 구의 반지름과 부피를 저장하는 멤버 변수
Sphere(double r) : radius(r) { ... }  
- 매개변수를 받는 타겟 생성자, radius 초기화
- r == 1.0이면 volume을 3.45로
- r == 3.0이면 volume을 110.42로
- 그 외에는 공식 (4/3 * π * r^3)으로 volume 계산
Sphere() : Sphere(1.0) {}  
- 위임 생성자: 기본 생성자는 r=1.0인 타겟 생성자를 호출
double getVolume() { return volume; }  
- 현재 객체의 부피를 반환
int main() { ... }  
- 프로그램 시작점
Sphere sph1;  
- 기본 생성자로 sph1 객체 생성 → radius=1, volume=3.45
cout << "구의 부피는 " << sph1.getVolume() << endl;  
- sph1의 부피 출력
Sphere sph2(3);  
- 매개변수 생성자로 sph2 객체 생성 → radius=3, volume=110.42
cout << "구의 부피는 " << sph2.getVolume() << endl;  
- sph2의 부피 출력
return 0;  
- 0 반환 및 프로그램 종료

