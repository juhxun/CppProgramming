## 코드 설명
<img width="412" height="258" alt="image" src="https://github.com/user-attachments/assets/a0bb9be7-c6c3-4234-8b9a-dbc198746423" />

```cpp

#include <iostream>
- iostream 라이브러리를 포함 

using namespace std;
- std:: 없이 cout, cin 바로 사용 가능

bool Exit(char str[]) {
- "exit" 입력 여부를 확인하는 함수 정의

    char target[] = "exit"; 
    - 비교용 문자열 "exit" 선언

    for (int i = 0; target[i] != '\0'; i++) {
    - "exit" 문자열 끝까지 반복

        if (str[i] != target[i]) {  
        - 한 글자라도 다르면

            return false;           
            - false 반환

        }
    }

    return str[4] == '\0'; 
    - 문자열 끝인지 확인 후 맞으면 true 반환

}

int main() {
- 프로그램 시작 지점

    char line[1000];
    - 입력 문자열 저장용 배열

    while (true) {
    - 무한 반복
        cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>> ";
        cin.getline(line, sizeof(line));
        - 한 줄 전체 입력 받기

        if (Exit(line)) {
        - "exit" 입력이면

            break;
            - 반복 종료

        }

        int x = 0;
        - 단어 개수 저장 변수 초기화

        bool Word = false;
        - 현재 단어 안에 있는지 표시

        for (int i = 0; line[i] != '\0'; i++) {
        - 문자열 끝까지 반복

            if (line[i] != ' ' && !Word) {
            - 공백이 아니고 단어 시작이면

                Word = true;
                - 단어 상태로 변경

                x++;
                - 단어 개수 증가

            }
            else if (line[i] == ' ') {
            - 공백이면

                Word = false;
                - 단어 끝 표시

            }

        }

        cout << "단어의 개수는 " << x << "개이다." << endl;
        - 단어 개수 출력

    }

    return 0;
    - 0을 반환 및 프로그램 종료
}
