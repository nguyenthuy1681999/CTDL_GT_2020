//ý tưởng: dùng hàm sinh hoán vị kế tiếp next_permutation(mảng, mảng + số phần tử)
//tạo hoán vị ban đầu
//sinh hoán vị kế tiếp nhờ hàm có sẵn
// dùng vòng lặp do while lặp đến hết hoán vị
#include<iostream>
#include<algorithm>
using namespace std;
void taoHoanViBanDau(int n, int a[]) {
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
}
void sinhHoanVi(int n, int a[]) {
	do{
		for (int i = 0; i < n; i++) {
			cout << a[i];
		}
		cout << " ";
	} while (next_permutation(a, a + n));
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a[1000];
		cin >> n;
		taoHoanViBanDau(n, a);
		sinhHoanVi(n, a);
	}
}


