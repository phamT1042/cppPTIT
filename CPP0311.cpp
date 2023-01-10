#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int dem[26] = {0};
		for (int i = 0; i < s.length(); i++)
			dem[s[i] - 'a']++;
		int Max = *max_element(dem, dem + 26);
		if (s.length() - Max >= Max - 1) cout << "1\n";
		else cout << "0\n";
	}
}
