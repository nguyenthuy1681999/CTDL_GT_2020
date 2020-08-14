//ý tưởng: dùng mảng, hoán vị kế tiếp dùng hàm next_permutation(mảng, mảng + số phần tử mảng),
//mảng đánh chỉ số từ 0
#include <iostream>     
#include <algorithm>

using namespace std;

void nhap(int n, int a[]) { // nhập hoán vị ban đầu
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuat(int n, int a[]) {
	next_permutation(a, a + n); // hàm sinh hoán vị kế tiếp
	for (int i = 0; i < n; i++) { // xuất ra mảng chứa hoán vị kế tiếp
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	int t, n, a[1000];
	cin >> t;
	while (t--) {
		cin >> n;
		nhap(n, a);
		xuat(n, a);
	}
	return 0;
}

