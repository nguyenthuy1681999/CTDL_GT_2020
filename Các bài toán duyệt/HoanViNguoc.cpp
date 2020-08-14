//ý tưởng: giống bài sinh hoán vị, dùng hàm prev_permutation(mảng, mảng + số phần tử mảng)
//sinh ra hoá vị trước đó 
#include<iostream>
#include<algorithm>
using namespace std;
void taoMangBanDau(int n, int a[]) {
	for (int i = 0; i < n; i++) {
		a[i] = n-i;
	}
}
void sinhHoanViNguoc(int n, int a[]) {
	do {
		for (int i = 0; i < n; i++) {
			cout << a[i];
		}
		cout << " ";
	} while (prev_permutation(a, a + n));
	cout << endl;
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n, a[1000];
		cin >> n;
		taoMangBanDau(n, a);
		sinhHoanViNguoc(n, a);
	}
}