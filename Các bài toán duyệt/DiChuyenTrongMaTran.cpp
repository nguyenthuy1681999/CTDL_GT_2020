//y tuong: dung de qui
// ta di nguoc lai tu dich ve dau
#include <bits/stdc++.h>
using namespace std;
int a[25][25],m,n;
int  diChuyenTrongMaTran(int m,int n){
	if (m==0||n==0) return 1; //neu da la vi tri a[0][0] thi dung
	else return diChuyenTrongMaTran(m-1,n)+ diChuyenTrongMaTran(m,n-1); // di chuyen len tren hoac sang trai
}
int main(){
	int t ;
	cin>>t;
	while (t--){ 
		//nhap ma tran
		cin>>m>>n;
		for (int i=0; i< m;i++){ 
			for (int i=0; i< n; i++) cin>>a[m][n];
		}
		cout<<diChuyenTrongMaTran(m-1,n-1)<<endl; // bat dau tu vi tri dich a[m-1][n-1]
	}
	return 0;
}

