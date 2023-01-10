#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int lengthBefore = s.length();
		string check = "100";
		while (s.find(check) != string::npos) {
			s.erase(s.find(check), 3);
		}
		if (lengthBefore - s.length()  != 0)
		    cout << lengthBefore - s.length() << endl;
	}
	return 0;
}