// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 05월20일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Vector {
    int* mem;
    int size;

public:
    Vector() {
        size = 5;
        mem = new int[size];

        for (int i = 0; i < size; i++)
            mem[i] = 0;
    }

    Vector(int s, int value) {
        size = s;
        mem = new int[size];

        for (int i = 0; i < size; i++)
            mem[i] = value;
    }
    ~Vector() {
        delete[] mem;
    }

    void show() {
        for (int i = 0; i < size; i++)
            cout << mem[i] << " ";

        cout << endl;
    }

    void show(int n) {
        for (int i = 0; i < n; i++)
            cout << mem[i] << " ";

        cout << endl;
    }
};

int main() {
    Vector x;
    Vector y(10, 8);

    x.show();
    y.show();
    y.show(3);

    return 0;
}
