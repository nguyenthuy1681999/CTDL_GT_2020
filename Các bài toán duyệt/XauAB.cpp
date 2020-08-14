// duyệt bằng thuật toán quay lui Try()
//dùng 1 mảng ký tự, mỗi phần tử mảng có 2 sự lựa chọn A hoặc B
#include<iostream>
#include<string.h>
using namespace std;
char a[1000];
int n;
void Try(int i) {
	for (char j = 'A'; j <= 'B'; j++) { // duyệt các khả năng xảy ra: 2 khả năng A, B
		a[i] = j; // thiết lập sự lựa chọn cho phần từ thứ i của mảng
		if (i == n) { // nếu i là phần tử cuối cùng thì xuất mảng ra
			for (int k = 1; k <= n; k++) {
				cout << a[k];
			}
			cout << " ";
		}
		else // nếu không thi duyệt phần tử tiếp theo
			Try(i + 1); 
	}
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		Try(1); // try từ 1
		cout << endl;
	}
	return 0;
}