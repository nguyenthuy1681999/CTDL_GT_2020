
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long t,m;
void Input(){
    cin >> t >> m;
}

void Solve(){

    long long x = 2;
    while(t != 1){
        while(t*x <= m) x++;
        t = t*x - m;
        m = m*x;
      
        ll gcd = __gcd(t,m);
        t = t/gcd;
        m = m/gcd;
        cout << 1 << '/' << x << " + ";
    }
    cout << 1 << '/' << m;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Input();
        Solve();
        cout<<endl;
    }
    return 0;
}

