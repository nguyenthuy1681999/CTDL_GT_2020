//ý tưởng: dùng thuật toán sinh
#include<iostream>
using namespace std;
bool OK = true;
int n, k, a[1000];
void banDau() {	
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
void traVe(){
	for (int i = 1; i <= k; i++) {// xuất ra output khi duyệt xong
		cout << a[i];
	}
	cout <<" ";
}
void timTapConKeTiep() {
	int i = k;
	while (a[i] == n - k + i && i > 0) i--; //tìm j sao cho j thoả mãn  a[j] != n - k + j 
	if (i > 0) { // nếu chưa phải tập con cuối cùng
		a[i] = a[i] + 1; //tăng giá trị tại vị trí i lên 1
		for (int j = i + 1; j <= k; j++) { // các vị trí j từ i+1,...k được thay đổi a[j] = a[i] + j - i;
			a[j] = a[i] + j - i;
		}	
	}
	else{
		OK = false;
	}
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		banDau();
		while (OK) {	
			traVe();
			timTapConKeTiep();		
		}
		OK = true;
		cout << endl;
	}
	return 0;
}
