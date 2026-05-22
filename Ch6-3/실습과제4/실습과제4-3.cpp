// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 05월20일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
#include <string>
using namespace std;

bool equals(string x, string y) {
    return x == y;
}

bool equals(string x, string y, int n) {
    return x.substr(0, n) == y.substr(0, n);
}

bool equals(string x, string y, int n, string z) {
    return x.substr(0, n) == z.substr(0, n);
}

int main() {
    string x = "Prof. Hwang";
    string y = "Prof. Kim";
    string z = "Prof. Lee";

    if (equals(x, y))
        cout << "같음" << endl;

    if (equals(x, y, 3))
        cout << "앞 3글자 같음" << endl;

    if (equals(x, y, 5, z))
        cout << "앞 5글자 같음" << endl;

    return 0;
}
