#include <iostream>
using namespace std;

class Collector {
    int* p;
    int size = 0;

public:
    // 생성자
    Collector(int size, int values[]) {
        this->size = size;

        p = new int[size];

        for (int i = 0; i < size; i++) {
            p[i] = values[i];
        }
    }

    // 복사 생성자
    Collector(const Collector& src) {
        size = src.size;

        p = new int[size];

        for (int i = 0; i < size; i++) {
            p[i] = src.p[i];
        }
    }

    // 소멸자
    ~Collector() {
        delete[] p;
    }

    // 출력 함수
    void show() {
        cout << "데이터 수 " << size << ": ";

        for (int i = 0; i < size; i++) {
            cout << p[i] << " ";
        }

        cout << endl;
    }

    int getSize() {
        return size;
    }

    int get(int index) {
        return p[index];
    }
};

// 평균 계산 함수
double calcAvg(Collector c) {
    int sum = 0;

    for (int i = 0; i < c.getSize(); i++) {
        sum += c.get(i);
    }

    return (double)sum / c.getSize();
}

int main() {
    int temp[] = { 69, 70, 71, 72, 74 };

    Collector weight(4, temp);

    double avg = calcAvg(weight);

    weight.show();

    cout << "평균은 " << avg << endl;

    return 0;
}
