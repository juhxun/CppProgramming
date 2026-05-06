// **********************************************
// 제 목 : 실습과제 3
// 날 짜 : 2026년 05월 04일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
#include <string>
using namespace std;

void SwapString(string* a, string* b);

int main() {
    string s1("hello");
    string s2("world");

    cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;

    SwapString(&s1, &s2); 

    cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;
}

void SwapString(string* a, string* b) {
    string temp = *a;
    *a = *b;
    *b = temp;
}
