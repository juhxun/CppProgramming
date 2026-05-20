// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 05월20일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class MyMath {
public:
    static int GetMax(int arr[], int size) {
        int maxVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
    static int GetMin(int arr[], int size) {
        int minVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] < minVal) {
                minVal = arr[i];
            }
        }
        return minVal;
    }
};

int main() {
    int x[5] = { 20, 30, -5, 2, -30 };
    cout << "최대값은 :" << MyMath::GetMax(x, 5) << endl;
    cout << "최소값은 :" << MyMath::GetMin(x, 5) << endl;
    return 0;
}
