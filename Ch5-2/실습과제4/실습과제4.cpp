// **********************************************
// 제 목 : 실습과제 4
// 날 짜 : 2026년 05월 08일
// 작성자 : 2301406 박주현
// **********************************************

#include <iostream>
using namespace std;

void get_parts(double a, int& b, double& c);

int main() {
    double n;
    int i;
    double d;

    cout << "실수를 입력하시오 : ";
    cin >> n;

    get_parts(n, i, d);

    cout << "정수부 : " << i << endl;
    cout << "소수부 : " << d << endl;

    return 0;
}

void get_parts(double a, int& b, double& c) {
    b = (int)a;
    c = a - b;
}
