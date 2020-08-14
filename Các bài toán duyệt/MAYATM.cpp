//ý tuong dung ham quay lui:
//sap xep giam dan vector luu loai tien de lay to tien menh gia lon
//lay so tien chia cho loai tien menh giá lon de co the lay nhieu to menh gia lon nhat co the
//tru di so tien da lay ra voi menh gia lon de xem so tien con lai, neu bang 0 la da het tien, show kq
//neu con du tien thi xác dinh so to tien tiep theo + vao soTo

#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> c; //khai bao vecto luu loai tien dang co
int n, soTo=0;
int kq = -1; ; //khong the tim ra 
ll s;
void Try(int i){
		int j = s/c[i]; //Kha nang 1: (soTo) nhieu nhat la s/c[i]: lay so tien chia cho to co menh gia lon nhat
		soTo+=j; //update soTo
		s-=(j*c[i]);//tinh so tien con lai
		if(s==0) kq = soTo; //neu so tien con lai bang 0 in ra so to
		else {             //neu chua bang 0
				if(i<n-1) //neu chua xet het các loai tien
				Try(i+1);//lay loai tien tiep theo de xet
			}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
    cin>>n>>s;
    c.resize(n);//luu lai vector mang moi
    for(int i=0;i<n;i++) 
	cin>>c[i];
	sort(c.begin(), c.end(), greater<int>()); // sap xep giam dan vector luu loai tien de lay to tien menh gia lon
	Try(0);
	cout<<kq;
	cout<<endl;
	c.clear();
	soTo=0;
	kq=-1;
	}
    return 0;
}

 
