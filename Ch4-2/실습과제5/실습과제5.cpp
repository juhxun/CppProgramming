// **********************************************
// 제 목 : 문자열의 여러값 출력
// 날 짜 : 2026년 04월 07일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

int main() {
    int size;
    char* str;

    cout << "저장할 문자열의 크기를 입력하세요: ";
    cin >> size;

    str = new char[size + 1];

    cout << "문자열을 입력하시오: ";

    cin.ignore();

    cin.getline(str, size + 1);

    cout << "입력한 문자열은 " << str << "입니다." << endl;
  
    delete[] str;

    return 0;
}
