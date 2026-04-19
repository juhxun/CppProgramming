# 실습과제 3

<img width="211" height="78" alt="image" src="https://github.com/user-attachments/assets/dd16dc90-966b-457a-959b-095bdb4690f2" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
#include <string>
- string 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
int main(void)
- 프로그램 시작점
{
	int num;
- 물품 개수 저장 변수
	cout << "구입할 물품의 개수>>";
	cin >> num;
- 물품 개수 입력
	int* price = new int[num];
- 크기가 num인 정수 배열 동적 할당
	if (!price) { cout << "no"; return -1; }
- 메모리 할당 실패 시 종료
	cout << "물품" << num << "개의 가격입력>>";
	cin >> price[0];
- 첫 번째 가격 입력
	int max = price[0], min = price[0];
- 최대값과 최소값을 첫 번째 값으로 초기화
	for (int i = 1; i < num; i++) {
- 두 번째 요소부터 반복
		cin >> price[i];
- 가격 입력
		if (max < price[i]) max = price[i];
- 현재 값이 더 크면 max 갱신
		if (min > price[i]) min = price[i];
- 현재 값이 더 작으면 min 갱신
	}
	cout << "제일 싼 가격은 " << min<<"\n";
- 최소값 출력
	cout << "제일 비싼 가격은 " << max;
- 최대값 출력
	delete[]price;
- 동적 할당한 배열 메모리 해제
	return 0;
- 프로그램 종료
}
```
<img width="399" height="41" alt="image" src="https://github.com/user-attachments/assets/73958399-e0ff-4972-a456-ae4700e0f9ab" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
#include <string>
- string 클래스 사용을 위해ㅔ 라이브러리 포함
using namespace std;
- std 네임스페이스 사용
int main(void) {
- 프로그램 시작점
	string text;
- 입력받을 원본 문자열
	string n;
- 조건을 만족하는 문자만 저장할 문자열
	cout << "텍스트 입력(한글 안 됨)>>";
	getline(cin, text, '\n');
- 한 줄 전체 문자열 입력
	for (int i = 0; i < text.length(); i++) {
- 문자열 길이만큼 반복
		if (isalpha(text[i]) || text[i] == ' ') {
- 알파벳이거나 공백이면
			n += text[i];
- 해당 문자를 n에 추가
		}
	}
	cout << n;
- 필터링된 문자열 출력
	return 0;
- 프로그램 종료
}
```

<img width="309" height="109" alt="image" src="https://github.com/user-attachments/assets/4d8b4369-dabc-479d-8d2f-0981d121cb48" />

```cpp
#include <iostream>
- ostream 라이브러리 포함
#include <string>
- 문자열 처리를 위해 string 라이브러리 포함
using namespace std;
int main() {
- 프로그램 시작점
	while (true) {
- 무한 반복
		string url;
- 입력받을 웹 주소 저장 변수
		cout << "웹 주소 입력>>";
		getline(cin, url);
- 공백 포함 한 줄 입력
		if (url == "stop") break;
- "stop" 입력 시 반복 종료
		string protocol, host, port = "80", rest = "/";
- protocol: 프로토콜, host: 호스트, port: 포트(기본 80), rest: 나머지 경로
		int p = url.find("://");
- "://" 위치 찾기
		protocol = url.substr(0, p);
- 시작부터 p 전까지 → 프로토콜 추출
		string remain = url.substr(p + 3);
- "://" 이후 문자열 저장
		int s = remain.find('/');
- '/' 위치 찾기
		if (s != string::npos) {
- '/'가 존재하면
			rest = remain.substr(s);
- '/'부터 끝까지 → 나머지 경로
			remain = remain.substr(0, s);
- '/' 이전까지 → host:port 부분
		}
		int c = remain.find(':');
- ':' 위치 찾기 (포트 구분용)
		if (c != string::npos) {
- ':'가 존재하면
			host = remain.substr(0, c);
- ':' 앞 → 호스트
			port = remain.substr(c + 1);
- ':' 뒤 → 포트 번호
		}
		else {
			host = remain;
- ':' 없으면 전체가 호스트 (포트는 기본값 80 유지)
		}
		cout << "프로토콜: " << protocol << endl;
- 프로토콜 출력
		cout << "호스트: " << host << endl;
- 호스트 출력
		cout << "포트: " << port << endl;
- 포트 출력
		cout << "나머지 부분: " << rest << endl;
- 나머지 경로 출력
	}
	return 0;
- 프로그램 종료
}
```

<img width="450" height="491" alt="image" src="https://github.com/user-attachments/assets/56d347c6-7c8e-412b-957a-af46df208b52" />


```cpp
#include <iostream>
-iostream 라이브러리 포함
#include <string>
- string 클래스 사용
using namespace std;
class Histogram {
- 문자열의 알파벳 빈도를 분석하는 클래스
private:
- 외부에서 직접  불가
	string text;
- 전체 문자열을 저장하는 변수
public:
- 외부에서 접근 가능한 멤버
	Histogram(string t) : text(t) {}
- 생성자: 초기 문자열 설정
	void add(string t) { text += t; }
- 문자열 추가 함수
	void add(char t) { text += t; }
- 문자 하나 추가 함수
	void draw();
- 히스토그램 출력 함수 선언
};
void Histogram::draw() { 
- 히스토그램 출력 함수 정의
	int alpha[27] = { 0, };
- 알파벳 개수 저장 배열
	cout << text << endl << endl;
- 전체 문자열 출력
	string t;
- 알파벳만 따로 저장할 문자열
	for (int i = 0; i < text.length(); i++) {
- 전체 문자열 순회
		if (isalpha(text[i])) {
- 알파벳인지 확인
			t += tolower(text[i]);
- 소문자로 변환 후 저장
			alpha[char(tolower(text[i])) - 'a']++;
- 해당 알파벳 인덱스 증가
		}
	}
	cout << "총 알파벳 수 " << t.length() << endl << endl;
- 전체 알파벳 개수 출력
	for (int i = 0; i < 26; i++) {
- a~z까지 반복
		cout << char('a' + i) << '(' << alpha[i] << ")\t: ";
- 알파벳과 개수 출력
		for (int j = 0; j < alpha[i]; j++) cout << '*';
- 개수만큼 '*' 출력
		cout << endl;
- 줄바꿈
	}
}
int main(void) {
- 프로그램 시작
	Histogram histo("You fill up my senses, like a night in a forest\n");
- 초기 문자열로 객체 생성
	histo.add("Like the mountains in springtime, like a walk in the rain\n");
- 문자열 추가
	histo.add('-');
- 문자 추가
	histo.add("Annie's Song by John Denver");
- 문자열 추가
	histo.draw();
- 히스토그램 출력 실행
	return 0;
- 프로그램 종료
}
