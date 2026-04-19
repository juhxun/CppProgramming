#include <iostream>
#include <string>

using namespace std;
class Histogram {
private:
	string text;
public:
	Histogram(string t) : text(t) {}
	void add(string t) { text += t; }
	void add(char t) { text += t; }
	void draw();
};

void Histogram::draw() { 
	int alpha[27] = { 0, };
	cout << text << endl << endl;
	string t;
	for (int i = 0; i < text.length(); i++) {
		if (isalpha(text[i])) {
			t += tolower(text[i]);
			alpha[char(tolower(text[i])) - 'a']++;
		}
	}
	cout << "총 알파벳 수 " << t.length() << endl << endl;

	for (int i = 0; i < 26; i++) {
		cout << char('a' + i) << '(' << alpha[i] << ")\t: ";
		for (int j = 0; j < alpha[i]; j++) cout << '*';
		cout << endl;

	}
}

int main(void) {
	Histogram histo("You fill up my senses, like a night in a forest\n");
	histo.add("Like the mountains in springtime, like a walk in the rain\n");
	histo.add('-');
	histo.add("Annie's Song by John Denver");
	histo.draw();
	return 0;
}
