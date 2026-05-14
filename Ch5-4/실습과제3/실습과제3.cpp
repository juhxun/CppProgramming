// **********************************************
// 제 목 : 실습과제 3
// 날 짜 : 2026년 05월14일
// 작성자 : 2301406 박주현
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Mystack {
	int* p;
	int size;
	int tos;
public:
	Mystack();
	Mystack(int size);
	Mystack(const Mystack& src);
	~Mystack();
	bool push(int n);
	bool pop(int& n);

};
Mystack::Mystack() :Mystack(10) {}
Mystack::Mystack(int size) {
	this->size = size;
	this->tos = 0;
	p = new int[size];
}
Mystack::Mystack(const Mystack& src) {
	this->size = src.size;
	this->tos = src.tos;

	p = new int[size];

	for (int i = 0; i < tos; i++) {
		p[i] = src.p[i];
	}
}
Mystack::~Mystack() {
	delete[]p;
}
bool Mystack::push(int n) {
	if (size <= tos) return false;
	else {
		p[tos++] = n;
		return true;
	}
}
bool Mystack::pop(int& n) {
	if (tos == 0) return false;
	else {
		n = p[--tos];
		return true;
	}
}

int main() {
	Mystack a(10);
	a.push(10);
	a.push(20);

	Mystack b = a;
	b.push(30);
	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;	//20
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;	//30
}
