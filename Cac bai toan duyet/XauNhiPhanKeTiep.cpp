//ý tưởng: duyệt từ cuối lên đầu, gặp 1 đổi thành 0, gặp 0 đổi thành 1 rồi giữ nguyên phần còn lại
#include<iostream>
#include<string.h>
using namespace std;
void timXauNhiPhanKeTiep(string s) {
	long n = s.length() - 1;
	for (int i = n; i >= 0; i--) {
		if (s[i] == '1') s[i] = '0'; // gặp 1 đổi thành 0
		else if (s[i] == '0') { // gặp 0 đổi thành 1
			s[i] = '1'; 
			break; // thoát vòng lặp giữ nguyên phần còn lại
		}
	}
	cout <<s<<endl;
}
int main() {
	string str;
	int t;
	cin >> t;
	while (t--) {
		cin >> str;
		timXauNhiPhanKeTiep(str);
	}
	return 0;
}