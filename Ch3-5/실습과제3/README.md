# 실습과제 3 코드 설명

<img width="236" height="77" alt="image" src="https://github.com/user-attachments/assets/40ba4057-5814-4a6e-b6ee-983b75b46b52" />
<img width="142" height="153" alt="image" src="https://github.com/user-attachments/assets/eed66663-125a-4b93-bab6-d8a5d9e048a0" />


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
}





