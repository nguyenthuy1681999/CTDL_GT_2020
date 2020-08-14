//y tuong: dung quy hoach dong
#include<iostream>
using namespace std;
int main(){
	int F[100][100],n,m,v;
	cin>>n; // nhap so phan tich
	for(int j = 0; j <= n; j++) 
		F[0][j] = 0; // gan dong 0 la 0
		F[0][0] = 1; // F[0][0] =1
		for(m=1; m<=n;m++){
				for(v=0;v<=n;v++){
				if(m>v) F[m][v] = F[m-1][v];
				else F[m][v] = F[m-1][v] + F[m][v-m];
			}
		}
		cout<<F[n][n];
	}
