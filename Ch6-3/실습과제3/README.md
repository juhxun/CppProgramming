# 실습과제3

<img width="241" height="53" alt="image" src="https://github.com/user-attachments/assets/086a2cd8-d6d4-4700-b1c0-7bcf7bacfe9c" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
class Triangle {
- 삼각형 객체를 정의하는 클래스
    static int count;
- static 멤버 변수
- 생성된 Triangle 객체 개수 저장
- 모든 객체가 공유
public:
- 외부에서 접근 가능한 멤버
    Triangle() {
- 생성자
        count++;
- 객체 생성 시 count 증가
    }
    ~Triangle() {
- 소멸자
        count--;
- 객체 소멸 시 count 감소
    }
    static int getNumofTriangle() {
- static 멤버 함수
- 현재 생성된 객체 수 반환
        return count;
- count 반환
    }
};
int Triangle::count = 0;
- static 멤버 변수 초기화
- 클래스 외부에서 한 번만 정의 필요
int main() {
- 프로그램 시작점
    Triangle* tri1 = new Triangle[5];
- Triangle 객체 5개를 동적으로 생성
- 생성자 5번 호출
    cout << "생성된 삼각형의 개수 : "
         << Triangle::getNumofTriangle() << endl;
- 현재 객체 개수 출력 → 5
    delete[] tri1;
- 동적 배열 메모리 해제
- 소멸자 5번 호출
    Triangle tri2[15];
- 지역 객체 배열 15개 생성
- 생성자 15번 호출
    cout << "생성된 삼각형의 개수 : "
         << Triangle::getNumofTriangle() << endl;
- 현재 객체 개수 출력 → 15
    return 0;
- 프로그램 종료
}
