// **********************************************
// 제 목 : 실수 합 출력
// 날 짜 : 2026년 03월 10일
// 작성자 : 2301406 박주현
// **********************************************

#include <iostream>

using namespace std;


int main() {

	double num[5];
	double sum = 0;

	cout << "실수를 5개를 입력하시오 >>"; 
	
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}

	cout << "양수 합은" << sum << "입니다."; 
return 0;
}
