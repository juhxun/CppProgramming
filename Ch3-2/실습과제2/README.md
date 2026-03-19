# 코드 설명
<img width="159" height="66" alt="image" src="https://github.com/user-attachments/assets/d664f581-eb0c-42fb-a386-02c9304bfbc3" />

```cpp
#include <iostream>  
- iostream 라이브러리 포함
using namespace std;  
class Triangle { ... };  
- 삼각형 객체를 정의하는 클래스
public:  
- 아래 멤버들은 외부에서 접근 가능
double width, height;  
- 삼각형의 밑변과 높이를 저장하는 멤버 변수
Triangle();  
- 기본 생성자 선언, 매개변수 없는 생성자
Triangle(double width, double height);  
- 매개변수를 받아 멤버 초기화하는 생성자 선언
double getArea();  
- 삼각형 면적을 계산해 반환하는 멤버 함수 선언
Triangle::Triangle() : Triangle(1,1) {}  
- 위임 생성자: 기본 생성자는 (1,1) 값을 갖는 타겟 생성자를 호출
Triangle::Triangle(double width, double height) : width(width), height(height) {}  
- 타겟 생성자: 멤버 초기화 리스트를 사용해 전달받은 값으로 멤버 초기화
double Triangle::getArea() { return width * height / 2; }  
- 삼각형 면적 공식 (밑변 × 높이 ÷ 2) 계산 후 반환
int main(void) { ... }  
- 프로그램 실행 시작점
Triangle tri1;  
- 기본 생성자로 tri1 객체 생성 → width=1, height=1
Triangle tri2(2,4);  
- 매개변수 생성자로 tri2 객체 생성 → width=2, height=4
cout << "삼각형의 면적은 " << tri1.getArea() << endl;  
- tri1의 면적 출력
cout << "삼각형의 면적은 " << tri2.getArea() << endl;  
- tri2의 면적 출력
return 0;  
- 0 반환 및 프로그램 종료
