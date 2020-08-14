#include<iostream>
using namespace std;
void timTapConKeTiep() {
	int n, k, a[1000];
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cin >> a[i];
	}
	int i = k;
	while (a[i] == n - k + i && i > 0) i--; //tìm i sao cho i thoả mãn  a[j] != n - k + i 
	if (i > 0) { // nếu chưa phải tập con cuối cùng
		a[i] = a[i] + 1; //tăng giá trị tại vị trí i lên 1
		for (int j = i + 1; j <= k; j++) { // các vị trí j từ i+1,...k được thay đổi a[j] = a[i] + j - i;
			a[j] = a[i] + j - i;
		}
		for (int i = 1; i <= k; i++) {// xuất ra output khi duyệt xong
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else if (i == 0) { // trường hợp còn lại là cấu hình cuối cùng đưa ra output luôn
		for (int i = 1; i <= k; i++) {
			cout << i << " ";
		}
		cout << endl;
	}
}
	
int main(){
	int t;
	cin >> t;
	while (t--) {
		timTapConKeTiep();
	}
}