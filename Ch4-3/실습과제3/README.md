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
- pArray++ 때문에 배열의 시작 주소를 잃어버린다. delete[]를 원래 주소가 아닌 잘못된 위치에 수행하게 된다, 그 결과 정의되지 않은 동작(프로그램 오류)이 발생한다.
- 포인터를 증가시키지 말고 배열처럼 pArray[i]로 접근한다. 또는 원래 주소를 따로 저장해두고(temp 같은 변수) 그걸로 순회한다. delete[]는 반드시 처음 new로 받은 원래 주소에 사용한다.
