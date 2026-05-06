// **********************************************
// 제 목 : 실습과제 2
// 날 짜 : 2026년 05월 04일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
#include <string>
using namespace std;

string GetString(string a, string b);

int main() {
    string s1("hello");
    string s2("world");
    string res;

    res = GetString(s1, s2); 

    cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
}

string GetString(string a, string b) {
    if (a > b)
        return a;
    else
        return b;
}
