//ý tuong
#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std; 
  
// vector to store prime and N primes 
// whose sum equals given S 
vector<int> set; 
vector<int> prime; 
vector< vector<int> >v;
// ham ktra so nguyen to
bool isPrime(int x) 
{ 
    // square root of x 
    int sqroot = sqrt(x); 
    bool flag = true; 
  
    // since 1 is not prime number 
    if (x == 1) 
        return false; 
  
    // if any factor is found return false 
    for (int i = 2; i <= sqroot; i++) 
        if (x % i == 0) 
            return false; 
  
    // no factor found 
    return true; 
} 
  
// hàm show kqua
void display() 
{ 
 	cout<<v.size()<<endl;
	for(int i=0; i<v.size(); i++){ 
	    for (int j = 0; j < v[i].size(); j++){  
	    	cout << v[i][j] << " "; 
		}   
		cout << "\n"; 
	} 
} 
  
// function to evaluate all possible N primes 
// whose sum equals S 
void primeSum(int total, int N, int S, int index) 
{ 
    // if total equals S And 
    // total is reached using N primes 
    if (total == S && set.size() == N) 
    {  
        // display the N primes 
        v.push_back(set);
        return; 
    } 
  
    // if total is greater than S 
    // or if index has reached last element 
    if (total > S || index == prime.size()) 
        return; 
  
    // add prime[index] to set vector 
    set.push_back(prime[index]); 
  
    // include the (index)th prime to total 
    primeSum(total+prime[index], N, S, index+1); 
  
    // remove element from set vector 
    set.pop_back(); 
  
    // exclude (index)th prime 
    primeSum(total, N, S, index+1); 
} 
  
// function to generate all primes 
void allPrime(int N, int S, int P) 
{ 
    // all primes less than S itself 
    for (int i = P+1; i <=S ; i++) 
    { 
        // if i is prime add it to prime vector 
        if (isPrime(i)) 
            prime.push_back(i); 
    } 
  
    // if primes are less than N 
    if (prime.size() < N) 
        return; 
    primeSum(0, N, S, 0); 
} 
  
// Driver Code 
int main() 
{ 
    int t, S, N, P; 
    cin>>t;
    while(t--){
	cin>>N>>P>>S;
    allPrime(N, S, P); 
    display();
    set.clear();
    prime.clear();
    v.clear();
    }
    return 0; 
} 
