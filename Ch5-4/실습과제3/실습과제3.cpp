#include <iostream>
using namespace std;

class MyStack {
    int* p;
    int size = 0;
    int tos = 0;

public:
    MyStack() {
        size = 10;
        p = new int[size];
    }

    MyStack(int size) {
        this->size = size;
        p = new int[size];
    }

    MyStack(const MyStack& src) {
        size = src.size;
        tos = src.tos;

        p = new int[size];

        for (int i = 0; i < tos; i++) {
            p[i] = src.p[i];
        }
    }

    ~MyStack() {
        delete[] p;
    }

    bool push(int n) {
        if (tos == size)
            return false;

        p[tos] = n;
        tos++;

        return true;
    }

    bool pop(int& n) {
        if (tos == 0)
            return false;

        tos--;
        n = p[tos];

        return true;
    }
};

int main() {
    MyStack a(10);

    a.push(10);
    a.push(20);

    MyStack b = a;

    b.push(30);

    int n;

    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;

    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;

    return 0;
}
