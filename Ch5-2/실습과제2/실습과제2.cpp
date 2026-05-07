// **********************************************
// 제 목 : 실습과제 1
// 날 짜 : 2026년 05월 08일
// 작성자 : 2301406 박주현
// **********************************************

#include <iostream>
using namespace std;

void add2(int& value);

int main(void)
{
    int number;

    cout << "정수를 입력하세요 : ";
    cin >> number;

    add2(number);

    cout << "2만큼 증가한 값 : " << number << endl;

    return 0;
}

void add2(int& value)
{
    value += 2;
}
