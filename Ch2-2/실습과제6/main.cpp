// **********************************************
// 제 목 : 영문 단어 수 출력 코드
// 날 짜 : 2026년 03월 10일
// 작성자 : 2301406 박주현
// **********************************************

#include <iostream>

using namespace std;


bool Exit(char str[]) {
    char target[] = "exit"; 
    for (int i = 0; target[i] != '\0'; i++) {
        if (str[i] != target[i]) {  
            return false;           
        }
    }

    return str[4] == '\0'; 
}

int main() {
    char line[1000];

    while (true) {
        cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>> ";
        cin.getline(line, sizeof(line));

        if (Exit(line)) {
            break;
        }

        int x = 0;
        bool Word = false;

        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] != ' ' && !Word) {
                Word = true;
                x++;
            }
            else if (line[i] == ' ') {
                Word = false;
            }
        }

        cout << "단어의 개수는 " << x << "개이다." << endl;
    }

    return 0;
}
