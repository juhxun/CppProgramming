# 실습과제 3 코드 설명

<img width="236" height="77" alt="image" src="https://github.com/user-attachments/assets/40ba4057-5814-4a6e-b6ee-983b75b46b52" />

```cpp
#define _CRT_SECURE_NO_WARNINGS
- strcpy 사용시 뜨는 경고를 막는다.
#include <iostream>
- iostream 라이브러리 포함
using namespace std;  
class Account
- 계좌 정보를 넣는 클래스 선언
{
private:
	char name[50];
	int money;
public:
	Account(const char* n) { strcpy(name, n); money = 0; };
- 생성자로 이름을 저장하고 초기 잔액을 0으로 설정
~Account() {}
- 소멸자 (특별한 기능 없음)
    char* setOwner(char* n) { strcpy(name, n); return name; }
- 계좌 소유자 이름 변경
void setMoney(int m) { money = m; }
- 잔액 설정
 int inquiry() { return money; }
- 현재 잔액 조회
   int withdraw(int wm) {
    - 출금 함수 정의
        if (wm <= money) {
            money -= wm;
            return wm;
        } else {
            cout << "잔액 " << money << endl;
            return 0;
        }
    }
    void deposit(int dm) { money += dm; }
    - 입금 함수
    const char* getOwner() { return name; }
    - 계좌 소유자 이름 반환
};

int main()
- 프로그램 시작

{
    Account a("황 ");
    - "황 " 이름으로 계좌 생성
    a.deposit(20000);
    - 20,000원 입금
    cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
    - 현재 잔액 출력
    int money = a.withdraw(15000);
    - 15,000원 출금
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
    - 출금 후 잔액 출력
    money = a.withdraw(8000);
    - 8,000원 출금 시도
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
    - 잔액 부족 시 메시지 출력 후 잔액 표시
}```
```
<img width="142" height="153" alt="image" src="https://github.com/user-attachments/assets/eed66663-125a-4b93-bab6-d8a5d9e048a0" />

```cpp
#include <iostream>
- iostram 라이브러리 포함

using namespace std;
class Coffee {
- 커피 정보를 관리하는 클래스 정의

private:
    int coffee, sugar, milk, water;
    - 커피, 설탕, 우유, 물의 양 저장

public:
    Coffee(int c = 10, int s = 0, int m = 0, int w = 0) {
    - 생성자: 기본값 커피 10, 설탕 0, 우유 0, 물 0
        coffee = c;
        sugar = s;
        milk = m;
        water = w;
    }

    void show() {
    - 현재 커피 재료 상태를 '*'로 출력
        cout << "coffee ";
        for (int i = 0; i < coffee; i++) cout << "*";
        cout << endl;

        cout << "sugar ";
        for (int i = 0; i < sugar; i++) cout << "*";
        cout << endl;

        cout << "milk ";
        for (int i = 0; i < milk; i++) cout << "*";
        cout << endl;

        cout << "water ";
        for (int i = 0; i < water; i++) cout << "*";
        cout << endl;
    }
};

int main() {
- 프로그램 시작

    Coffee espresso;
    - 기본값(커피10, 설탕0, 우유0, 물0)으로 에스프레소 생성

    Coffee americano(5, 0, 0, 10);
    - 아메리카노: 커피5, 설탕0, 우유0, 물10

    Coffee cappuccino(5, 1, 5, 2);
    - 카푸치노: 커피5, 설탕1, 우유5, 물2

    Coffee mySweet(3, 7, 5, 5);
    - 내 취향: 커피3, 설탕7, 우유5, 물5

    espresso.show();
    - 에스프레소 상태 출력

    cout << endl;
    - 줄 바꿈

    mySweet.show();
    - 내 취향 커피 상태 출력
}
```
<img width="109" height="41" alt="image" src="https://github.com/user-attachments/assets/6c3e22f4-6f15-44b7-8c91-b8d32f586ac7" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
class Picture {
- 그림 정보를 저장하는 클래스 
private:
    int width, height;
    string place;
    - 그림의 가로, 세로 크기와 장소 정보 저장

public:
    Picture() {
    - 기본 생성자
        width = 5;
        height = 7;
        place = "모름";
        - 기본값: 가로5, 세로7, 장소 "모름"
    }

    Picture(int w, int h, string p) {
    - 매개변수 생성자
        width = w;
        height = h;
        place = p;
        - 사용자가 지정한 가로, 세로, 장소로 초기화
    }

    int getWidth() { return width; }
    - 그림 가로 크기 반환

    int getHeight() { return height; }
    - 그림 세로 크기 반환

    string getPlace() { return place; }
    - 그림 장소 반환
};

int main() {
- 프로그램 시작

    Picture pic;
    - 기본 생성자로 그림 객체 생성

    Picture mt(10, 14, "한라산");
    - 가로10, 세로14, 장소 "한라산" 그림 객체 생성

    cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
    - 기본 그림 정보 출력: 5x7 모름

    cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
    - "한라산" 그림 정보 출력: 10x14 한라산
}

```




