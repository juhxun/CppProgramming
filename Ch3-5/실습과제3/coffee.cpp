// **********************************************
// 제 목 : 커피
// 날 짜 : 2026년 03월 30일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
using namespace std;

class Coffee {
private:
    int coffee, sugar, milk, water;

public:
    Coffee(int c = 10, int s = 0, int m = 0, int w = 0) {
        coffee = c;
        sugar = s;
        milk = m;
        water = w;
    }

    void show() {
        cout << "coffee ";
        for (int i = 0; i < coffee; i++) cout << "*";
        cout << endl;

        cout << "sugar ";
        for (int i = 0; i < sugar; i++) cout << "*";
        cout << endl;

        cout << "milk ";
        for (int i = 0; i < milk; i++) cout << "*";
        cout << endl;

        cout << "water ";
        for (int i = 0; i < water; i++) cout << "*";
        cout << endl;
    }
};

int main() {
    Coffee espresso;
    Coffee americano(5, 0, 0, 10);
    Coffee cappuccino(5, 1, 5, 2);
    Coffee mySweet(3, 7, 5, 5);

    espresso.show();
    cout << endl;
    mySweet.show();
}
