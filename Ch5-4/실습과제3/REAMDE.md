# 실습과제3

<img width="196" height="51" alt="image" src="https://github.com/user-attachments/assets/fde7a847-af73-4fff-a85d-4fd7a2592ba9" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
class Collector {
- 여러 개의 정수를 저장
    int* p;
- 데이터를 저장할 동적 배열 포인터
    int size = 0;
- 저장된 데이터 개수
public:
- 외부에서 접근 가능
    Collector(int size, int values[]) {
- 전달받은 배열 데이터를 객체 내부에 저장
        this->size = size;
- 데이터 개수 저장
        p = new int[size];
- 크기만큼 동적 배열 생성
        for (int i = 0; i < size; i++) {
- 배열 전체 반복
            p[i] = values[i];
- 전달받은 배열 값 복사
        }
    }
    Collector(const Collector& src) {
- 복사 생성자
        size = src.size;
- 원본 객체의 크기 복사
        p = new int[size];
- 새로운 메모리 생성
        for (int i = 0; i < size; i++) {
- 전체 데이터 반복
            p[i] = src.p[i];
- 원본 데이터 복사
        }
    }
    ~Collector() {
- 소멸자
        delete[] p;
- 동적 할당 메모리 해제
    }

    void show() {
- 저장된 데이터 출력 함수
        cout << "데이터 수 " << size << ": ";
- 데이터 개수 출력
        for (int i = 0; i < size; i++) {
- 배열 전체 반복
            cout << p[i] << " ";
- 데이터 출력
        }
        cout << endl;
- 줄바꿈
    }
    int getSize() {
- 데이터 개수 반환 함수
        return size;
- size 반환
    }
    int get(int index) {
- 특정 위치 데이터 반환 함수
        return p[index];
- index 위치 값 반환
    }
};
double calcAvg(Collector c) {
- 객체를 값으로 전달 → 복사 생성자 호출
    int sum = 0;
- 합계를 저장할 변수
    for (int i = 0; i < c.getSize(); i++) {
- 데이터 전체 반복
        sum += c.get(i);
- 값 누적
    }
    return (double)sum / c.getSize();
- 평균 계산 후 반환
}
int main() {
- 프로그램 시작점
    int temp[] = { 69, 70, 71, 72, 74 };
- 초기 정수 배열 선언
    Collector weight(4, temp);
- Collector 객체 생성
    double avg = calcAvg(weight);
- 평균 계산 함수 호출
- 값 전달이므로 복사 생성자 실행
    weight.show();
- 저장된 데이터 출력
    cout << "평균은 " << avg << endl;
- 평균 출력
    return 0;
- 프로그램 종료
}
