#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long a[n], sumMax[n]; //sumMax luu gia tri sum lon nhat 
									//1 day tang dan nao do tu vi tri 0 den vi tri i 
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sumMax[i] = a[i];
		}
		for (int i = 0; i < n; i++) {
			long long sum = 0;
			for (int j = 0; j < i; j++) {
				if (a[i] > a[j]) {
					sum = max(sum, sumMax[j]);
				}
			}
			sumMax[i] += sum;
		}
		cout << *max_element(sumMax, sumMax + n) << endl;
	}
}