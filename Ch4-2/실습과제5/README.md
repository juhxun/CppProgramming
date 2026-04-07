# 코드 설명
<img width="299" height="62" alt="image" src="https://github.com/user-attachments/assets/04d610dd-3240-49e6-ac52-57716cf35913" />

```cpp
#include <iostream>
-iostream 라이브러리 포함
using namespace std;
int main() {
- 프로그램 시작점
    int i;
- 입력할 문자열의 길이 저장 변수
    char* j;
- 문자열을 저장할 문자 배열 포인터
    cout << "저장할 문자열의 크기를 입력하세요: ";
    cin >> i;
- 문자열 길이 입력받음
    j = new char[i + 1];
- 문자 배열 동적 할당
    cout << "문자열을 입력하시오: ";
    cin.ignore();
- 이전 입력에서 남은 개행 문자 제거
    cin.getline(j, i + 1);
- 공백 포함 문자열 입력
    cout << "입력한 문자열은 " << j << "입니다." << endl;
- 입력한 문자열 출력
    delete[] j;
- 동적 할당한 메모리 해제
    return 0;
- 프로그램 종료
}
