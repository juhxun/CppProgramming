// **********************************************
// 제 목 : 실습과제 5
// 날 짜 : 2026년 05월 04일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
#include <string>
using namespace std;

string GetLastString(string arr[], int size);

int main() {
    string names[5];
    string res;

    for (int i = 0; i < 5; i++) {
        cout << "이름 >> ";
        getline(cin, names[i], '\n');
    }

    res = GetLastString(names, 5);

    cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
}

string GetLastString(string arr[], int size) {
    string max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}
