# 코드 설명
# Q. 아래 코드의 문제점을 설명하고 해결방법을 설명하시오.
```cpp
int main() {
Circle* pArray = new Circle[3];
for (int i = 0; i < 3; i++) {
cout << pArray ->getArea() << '\n';
pArray++;
}
delete [ ] pArray;
return 0;
}
```
## A. 
