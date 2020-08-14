//ý tuong: su dung thuat toan quay lui
// trang thai true - chua co quan hau nao duoc xep vao o do
#include<bits/stdc++.h>
#define MAX 100

using namespace std;
int X[MAX], c[MAX][MAX];
bool COT[MAX], DCXUOI[MAX], DCNGUOC[MAX];
int Tong = 0;
int calc(){
	int s=0;
	for(int i=1;i<=8;i++){
		s+=c[i][X[i]];
	}
	return s;
}
void xuLi(int i){
	for(int j=1;j<=8;j++){
		if(!(COT[j]||DCXUOI[i-j+8]||DCNGUOC[i+j-1])){
			X[i]=j; 
			COT[j]=true;
			DCXUOI[i-j+8] = true;
			DCNGUOC[i+j-1] = true;
			if(i==8) {
				int t=calc();
				if(t>Tong) Tong=t;
			}
			else xuLi(i+1);
			COT[j]=false;
			DCXUOI[i-j+8]=false;
			DCNGUOC[i+j-1]=false;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		Tong=0;
		for(int i=1; i<=8; i++){ 
			for(int j=1;j<=8;j++)
				cin>>c[i][j]; //nhap vao các O 
		}
	//Init();
	xuLi(1);
	cout<<Tong<<endl;
	}
}
