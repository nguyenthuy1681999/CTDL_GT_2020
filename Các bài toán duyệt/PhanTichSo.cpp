//su dung thuat toan sinh
//Cau hinh ban dau 1111
//cau hinh cuoi la so n
#include<bits/stdc++.h> 
using namespace std;
vector <int> X(100), T(100); //tao vector luu nghiem co the co va tong nghiem
vector < vector<int> > res; //tao vector luu cac vector nghiem
int n;
//tao mot ham so sanh so  nguyen
bool soSanhPhanTu(int x, int y){
	return x>y;
}
//tao ham so sanh hai vector nghiem
bool soSanhVector(vector<int>x, vector<int>y){
	//them phan tu 0 vao vector nghiem ít phan tu hon de chay vong lap for so sanh cac phan tu 2 vector
	while(x.size()<y.size()) //neu size vector nghiem x nho hon y 
		x.push_back(0); //then phan tu 0
	while(x.size()>y.size())
		y.push_back(0);
	for(int i=0; i<x.size();i++){//so sanh các phan tu cua 2 vector lay vector nghiem co phan tu nào lon hon 
		if(x[i]==y[i]) continue;
		return(x[i]>y[i]); // tra ve vetor x>y tai phan tu i
	}
}
void Try(int i){
	int j;
	for(j = X[i-1]; j<=(n-T[i-1]); j++){
		X[i] = j;
		T[i] = T[i-1] + j;
		if(T[i]==n){
			vector<int> tmp; //vector luu vector nghiem thoa man 
			int temp;
			for(temp = 1 ; temp <= i; temp++ ){
				tmp.push_back(X[temp]);
			}
			res.push_back(tmp); 
		}
		else Try(i+1);
	}
}
void xuLy(){
	X[0] = 1; 
    T[0] = 0;
	Try(1); //thuc hien quay lui
	for(int i = 0; i<res.size();i++){ // sap xep phan tu trong moi vector nghiem giam dan
		sort(res[i].begin(), res[i].end(), soSanhPhanTu);	
	}
	sort(res.begin(), res.end(), soSanhVector); //sap xep cac vector nghiem theo thu tu giam dan cua size
	for(int i = 0; i< res.size();i++){ //show ra vector nghiem
		cout<<"(";
		for(int j = 0; j<res[i].size();j++) { //show phan tu vector nghiem
			cout<<res[i][j];
			if(j!=res[i].size()-1) cout<<" ";
		}
		cout<<") ";
	}
	cout<<endl;
}
int main()
{ 
	int t; 
	cin>>t;
	while(t--){	
    	cin >> n;
    	res.clear(); //xoa vector luu vetor nghiem cua test cu di
    	xuLy();
	}
    return 0;
}
