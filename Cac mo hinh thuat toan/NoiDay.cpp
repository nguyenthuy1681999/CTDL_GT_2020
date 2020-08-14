//y tuong: su dung thuat toan tham lam
// su dung cau truc hang doi uu tien: luon tinh tong = tong + hai soi nho nhat 
// noi 2 soi nho nhat thanh 1 soi, sau do push lai soi do vao queue.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n; //nhap vao so soi day
		long long sum=0;
		int s[n+1];  // mang luu do dai cac soi day 
	    priority_queue <int, vector<int>, greater<int> >qp; //hang doi uu tien cho vector luu do dai soi day
		for (int i=1; i<=n; i++){ 
		    cin>>s[i]; // nhap vao do dai cac soi day
			qp.push(s[i]); // day vao hang doi uu tien 
	    }
		while (qp.size()>1){ //xet trong hang doi uu tien
			long long  f=qp.top();  // tra ve do dai nho nhat
			qp.pop(); //xoa phan tu vua tra ve ra di
			long long  s=qp.top();  // tra ve do dai nho nhat tiep theo
			qp.pop(); //xoa phan tu vua tra ve
			sum +=(f+s); // cong tong chi phi
			qp.push(f+s);// noi hai soi thanh 1 soi và push vao queue
		}
		cout<<sum<<endl;	
	} 
	return 0;
}

