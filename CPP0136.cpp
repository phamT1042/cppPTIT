#include<bits/stdc++.h>
using namespace std;
int sang[1000001];
void tao() {
	for (int i = 0; i <= 1e6; i++) sang[i] = 1;
	sang[0] = sang[1] = 0;
	for (int i = 0; i <= 1e3; i++) {
		if (sang[i]) {
			for (int j = i * i; j <= 1e6; j += i) sang[j] = 0;
		}
	}
}
int main() {
	tao();
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		long long count = 0;
		for (long long i = 2; i * i <= n; i++) {
			if (sang[i]) count++;
		}
		cout << count << endl;
	}
	return 0;
}
