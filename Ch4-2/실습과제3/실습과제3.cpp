#include <iostream>
using namespace std;

int main() {
    int n;
    int* arr;
    int sum = 0;

    cout << "입력할 정수의 개수를 입력하세요: ";
    cin >> n;

    arr = new int[n];

    cout << n << "개의 정수를 입력 하시오." << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "평균값은 " << sum / n << "입니다" << endl;

    delete[] arr;

    return 0;
}
