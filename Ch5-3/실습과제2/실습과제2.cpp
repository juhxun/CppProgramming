// **********************************************
// 제 목 : 실습과제 1
// 날 짜 : 2026년 05월 11일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void Uppercase(string& s);

int main() {
    string s1("hello");

    cout << "변환전 문자열 " << s1 << endl;

    Uppercase(s1);

    cout << "변환후 문자열 " << s1 << endl;

    return 0;
}

void Uppercase(string& s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
}
