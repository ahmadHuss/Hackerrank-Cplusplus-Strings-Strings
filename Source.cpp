#include <iostream>
#include<string>
using namespace std;

int main() {


	string s1, s2;
	cin >> s1 >> s2;
	cout << s1.size() << " " << s2.size() << endl;
	cout << s1 + s2 << endl;

	char s = s1.at(0);
	char se = s2.at(0);
	s1[0] = se;
	s2[0] = s;
	cout << s1 << " " << s2 << endl;


}