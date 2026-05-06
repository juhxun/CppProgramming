# 실습과제 5


```cpp
#include <iostream>
- iostream 라이브러리 포함

#include <string>
- string 클래스 사용
using namespace std;
- std 네임스페이스 사용
string GetLastString(string arr[], int size);
- 문자열 배열에서 사전상 가장 뒤에 오는 문자열을 찾는 함수 선언
int main() {
- 프로그램 시작점
    string names[5];
- 문자열 5개를 저장할 배열
    string res;
- 결과 저장 변수
    for (int i = 0; i < 5; i++) {
- 5번 반복하여 입력
        cout << "이름 >> ";
- 입력 안내
        getline(cin, names[i], '\n');
- 공백 포함 문자열 입력
    }
    res = GetLastString(names, 5);
- 배열에서 가장 뒤 문자열 찾기
    cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
- 결과 출력
}
string GetLastString(string arr[], int size) {
- 문자열 배열 처리 함수 정의
    string max = arr[0];
- 첫 번째 값을 기준으로 최대값 초기화
    for (int i = 1; i < size; i++) {
- 두 번째 요소부터 비교
        if (arr[i] > max) {
- 사전 순 비교
            max = arr[i];
- 더 뒤에 있는 문자열로 갱신
        }
    }
    return max;
- 최종 결과 반환
}
