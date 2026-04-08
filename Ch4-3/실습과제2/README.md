# 코드 설명
# Q. 아래 코드의 문제점을 설명하고 해결방법을 설명하시오.
```cpp
int main() {
int radius;
while (true) {
cout << "반지름 입력(음수이면 종료)>> ";
cin >> radius;
if (radius < 0) break; .
Circle* p = new Circle(radius);
cout << "원의 면적:" << p->getArea() << endl;
}
return 0;
}
```
## A. `Delete`를 작성하지 않아 메모리 누수가 발생함. 따라서 Delete를 작성해주면된다.
