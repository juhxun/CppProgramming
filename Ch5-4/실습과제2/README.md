# 실습과제 2

<img width="379" height="152" alt="image" src="https://github.com/user-attachments/assets/69c555f1-4f80-4fb8-9f62-fd1fdbc81e61" />

```cpp
#include <iostream>
- iostream 라이브러리 포함
#include <string>
- string 클래스 사용
using namespace std;
- std 네임스페이스 사용
class Person {
- 객체를 정의
    string name;
- 이름 저장 변수
    int id;
- ID 저장 변수
public:
- 외부에서 접근 가능
    Person(int id, const string& name);
- 생성자 선언
    Person(const Person& person);
- 복사 생성자 선언
    ~Person();
- 소멸자 선언
    void changeName(const string& name);
- 이름 변경 함수 선언
    void show() {
- 객체 정보 출력 함수
        cout << id << ',' << name << endl;
- ID와 이름 출력
    }
};
Person::Person(int id, const string& name) {
- 생성자 정의
    this->id = id;
- 전달받은 id를 멤버 변수에 저장
    this->name = name;
- 전달받은 name을 멤버 변수에 저장
}
Person::Person(const Person& person) {
- 복사 생성자 정의
- 다른 Person 객체를 이용해 새 객체 생성
    this->id = person.id;
- 원본 객체의 id 복사
    this->name = person.name;
- 원본 객체의 name 복사
    cout << "복사 생성자 실행. 원본 객체의 이름 "
        << this->name << endl;
- 복사 생성자 실행 메시지 출력
