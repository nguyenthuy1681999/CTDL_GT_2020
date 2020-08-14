#include <bits/stdc++.h>
using namespace std;

int N;

long long left(long long n) {
    return n*10;
}

long long right(long long n) {
    return n*10+9;
}

void xuly() {
    long long temp;
    queue<long long> q;
    q.push(9);
    while(1) {
        temp = q.front();
        q.pop();
        if (temp % N == 0) {
            cout << temp << "\n";
            break;
        }
        else {
            q.push(left(temp));
            q.push(right(temp));
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T > 0) {
        cin >> N;
        xuly();
        --T;
    }
}


