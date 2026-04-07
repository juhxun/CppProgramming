// **********************************************
// 제 목 : 최대값 출력
// 날 짜 : 2026년 04월 07일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

int main() {
    int n;
    double* arr;

    cout << "입력할 실수의 개수를 입력하세요: ";
    cin >> n;

    arr = new double[n];

    cout << n << "개의 실수를 입력 하시오." << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "최대값은 " << max << "입니다" << endl;

    delete[] arr;

    return 0;
}
