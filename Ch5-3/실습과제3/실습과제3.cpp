// **********************************************
// 제 목 : 실습과제 3
// 날 짜 : 2026년 05월 11일
// 작성자 : 2301406 박주현
// **********************************************

#include <iostream>
#include <string>
using namespace std;

void SwapString(string& a, string& b);

int main() {
    string s1("hello");
    string s2("world");

    cout << "교환전 문자열 " << s1 << " " << s2 << endl;

    SwapString(s1, s2);

    cout << "교환후 문자열 " << s1 << " " << s2 << endl;

    return 0;
}

void SwapString(string& a, string& b) {
    string t;

    t = a;
    a = b;
    b = t;
}
