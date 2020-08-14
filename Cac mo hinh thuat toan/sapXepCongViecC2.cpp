//y tuong: su dung thuat toan tham lam
//  sap xep cong viec theo thoi gian ket thuc som nhat giam dan
// lap: neu hanh dong bat dau cua cong viec sau ma nho hon hoac bang ket thuc cviec truoc thi lay
#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int BD[MAX], KT[MAX], n, dem=0;
void Init(){
	cin>>n; // nhap so cong viec
	for(int i = 0; i<n ; i++){
		cin>>BD[i]; // nhap cong viec bat dau va ket thuc
		cin>>KT[i];
	}
}
void sapXep(){
	for(int i = 0; i <n-1; i++){
		for(int j = 0; j <n-i-1; j++){ //sap xep noi bot
			if(KT[j]>KT[j]){
				swap(KT[j],KT[j+1]);
				swap(BD[j],BD[j+1]);
			}
		}
	}
}
void thamLam(){
	int i = 0, j =0; dem =1 ; // bat dau tu hanh dong 1
		while(j<n){
			for( i = j+1 ; i< n; i++){
				if(BD[j]>=KT[i])
				{
					dem++;
					break;
			}		
		}	
		j=i; // gan bang hanh dong sau de xet tiep		
	}
	cout<<dem<<endl; // dua ra ket qua
}
int main(){
	int t; 
	cin>>t;
	while(t--){
		Init();
		sapXep();
		thamLam();
	}
	return 0;
}
