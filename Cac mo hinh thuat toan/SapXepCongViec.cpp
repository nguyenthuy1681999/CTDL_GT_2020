//y tuong: su dung thuat toan tham lam
//  sap xep cong viec theo thoi gian ket thuc som nhat giam dan
// lap: neu hanh dong bat dau cua cong viec sau ma nho hon hoac bang ket thuc cviec truoc thi lay
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int b[],int n)  //sap xep noi bot
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
    for (j = 0; j < n-i-1; j++)  
        if (b[j] > b[j+1]){
        	swap(b[j], b[j+1]);
			swap(a[j], a[j+1]);  
		}          
}  
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,dem=1;
		cin>>n;
		int a[n],b[n];
		int i,j;
		// nhap cong viec bat dau va ket thuc
		for (i=0; i<n; i++)
			 cin>>a[i] ;
		for (j=0; j<n; j++)
			 cin>>b[j] ;
		bubbleSort(a,b,n);//sap xep noi bot
		i=0,j=0;
		while (j<n){ // bat dau tu hanh dong 1
			for (i=j+1;i<n;i++){
				if (b[j]<=a[i]) {
					dem++;	
					break;
				}
			}
			j=i;// gan bang hanh dong sau de xet tiep		
		}
		cout<<dem<<endl;
	} 
	return 0;
}

