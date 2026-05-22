// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 05월20일
// 작성자 : 2301406 박주현
// **********************************************
#include <iostream>
#include <string>
using namespace std;

class WordUtility {
public:
    static int wordCount(string s) {
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ')
                count++;
        }

        return count + 1;
    }

    static string getWord(string s, int n) {
        int count = 1;
        string word = "";

        for (int i = 0; i <= s.length(); i++) {
            if (s[i] == ' ' || s[i] == '\0') {
                if (count == n)
                    return word;

                word = "";
                count++;
            }
            else {
                word += s[i];
            }
        }

        return "";
    }
};

int main() {
    int n = WordUtility::wordCount("I love C++");

    cout << "단어 개수는 " << n << endl;

    string word = WordUtility::getWord("I love C++", 3);

    if (word == "")
        cout << "3번째 단어는 없습니다." << endl;
    else
        cout << "3번째 단어는 " << word << endl;

    return 0;
}
