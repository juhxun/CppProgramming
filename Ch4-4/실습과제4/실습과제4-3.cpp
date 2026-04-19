// **********************************************
// 제 목: 실습과제 4-1(8번)
// 날 짜: 2026년 4월 14일
// 작성자: 2301406 박주현
// **********************************************
#include <iostream>
#include <string>

using namespace std;
int main() {
    while (true) {
        string url;
        cout << "웹 주소 입력>>";
        getline(cin, url);

        if (url == "stop") break;

        string protocol, host, port = "80", rest = "/";

        int p = url.find("://");
        protocol = url.substr(0, p);

        string remain = url.substr(p + 3);

        int s = remain.find('/');
        if (s != string::npos) {
            rest = remain.substr(s);
            remain = remain.substr(0, s);
        }

        int c = remain.find(':');
        if (c != string::npos) {
            host = remain.substr(0, c);
            port = remain.substr(c + 1);
        }
        else {
            host = remain;
        }

        cout << "프로토콜: " << protocol << endl;
        cout << "호스트: " << host << endl;
        cout << "포트: " << port << endl;
        cout << "나머지 부분: " << rest << endl;
    }
    return 0;
}
