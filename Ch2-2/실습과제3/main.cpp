// **********************************************
// 제 목 : 정보 출력
// 날 짜 : 2026년 03월 10일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>

using namespace std;


int main() {

	char num[10];
	char name[10];
	char adress[20];

	cout << "학번을 입력하시오:";
	cin >> num;
	cout << "이름을 입력하시오:";
	cin >> name;
	cout << "주소를 입력하시오:";

	cin.ignore();
	cin.getline(adress, sizeof(adress), '\n');
	cout << endl;

	cout << "1. 학번:" << num << endl;
	cout << "2. 이름:" << name << endl;
	cout << "3. 주소:" << adress << endl;
}
