//ý tuong: su dung thuat toan quay lui
// trang thai true - chua co quan hau nao duoc xep vao o do
#include<bits/stdc++.h>
#define MAX 100

using namespace std;
int X[MAX], n, dem = 0;
bool COT[MAX], DCXUOI[MAX], DCNGUOC[MAX];
void Init(){ //thiet lap ban co ban dau
	cin>>n;
	for(int i; i<=n; i++){ 
		COT[i] = true; //thiet lap cac cot o trang thai true 
	}
	for(int i=1; i<2*n;i++){
		DCXUOI[i] = true; // thiet lap duong cheo xuoi true
		DCNGUOC[i] = true; // thiet lap duong cheo nguoc true
	}
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(COT[j]&&DCXUOI[i-j+n]&&DCNGUOC[i+j-1]){
			X[i]=j;
			COT[j]=false;
			DCXUOI[i-j+n] = false;
			DCNGUOC[i+j-1] = false;
			if(i==n) dem=dem+1;
			else Try(i+1);
			COT[j]=true;
			DCXUOI[i-j+n]=true;
			DCNGUOC[i+j-1]=true;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	Init();
	Try(1);
	cout<<dem<<endl;
	dem = 0;
	}
}
