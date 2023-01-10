#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	ifstream fpIn;
	ofstream fpOut;
	fpIn.open("PTIT.in", ios::in);
	fpOut.open("PTIT.out", ios::out);
	while (fpIn >> s) {
		fpOut << s << endl;
	}
	fpIn.close();
	fpOut.close();
	return 0;
}
