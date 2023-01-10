#include <bits/stdc++.h>
using namespace std;
int main() {
	string words[2000];
	int n = 0;
	while(cin >> words[n]) {
		n++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < words[i].length(); j++) {
			words[i][j] = tolower(words[i][j]);
		}
	}
	bool startLine = true, endLine = false;
	for (int i = 0; i < n; i++) {
		if (startLine) words[i][0] = toupper(words[i][0]);
		if (words[i][words[i].length() - 1] == '.' || words[i][words[i].length() - 1] == '?' || words[i][words[i].length() - 1] == '!') {
			words[i].erase(words[i].length() - 1, 1);
			startLine = true;
			endLine = true;
		} else {
			startLine = false;
			endLine = false;
		}
		cout << words[i];
		if (endLine) cout << "\n";
		else if (i != n - 1) {
			cout << " ";
		}
	}
	return 0;
}