//y tuong: su dung quy hoach dong
//co hai kha nang chon duoc do vat i va khong chon do vat i
#include <bits/stdc++.h>
using namespace std;
int maxv[1000][1000]; // mang luu tong gia tri lon nhat
int qhd(int a[],int c[],int n,int v)
{   
	for(int i=0;i<=v;i++) { 
			maxv[0][i]=0; // khoi tao bang phuong an 
		}
    for(int i=1;i<=n;i++){ //xet cac do vat 
	        for(int j=1;j<=v;j++)  //xét voi trong luong
	        {   
				maxv[i][j]=maxv[i-1][j]; //neu khong chon do vat i thi gia tri lon nhat tu i-1 voi trong luong j
	            if(a[i]<=j && maxv[i][j]<maxv[i-1][j-a[i]]+c[i]) // neu chon do vat i thi 
				 	maxv[i][j]=maxv[i-1][j-a[i]]+c[i]; //gia tri max lon nhat tu i-i cong them voi c[i]
	        }
        }
    return maxv[n][v]; //tra ve kq gia tri lon nhat
}

int main(){
		int t;
		cin>>t;
		while (t--){
			int n,v;
			cin>>n>>v; // nhap so luong do va tong the tich
			int a[n+5],c[n+5];
		    for (int i=1; i<=n; i++)cin>>a[i]; // nhap trong luong do vat
			for (int i=1; i<=n; i++)cin>>c[i]; // nhap gia tri su dung
	        cout<<qhd(a,c,n,v)<<endl;
		}
		
	return 0;
}

