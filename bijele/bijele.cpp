#include <algorithm> 
#include <vector> 
#include <iostream> 
#include <set> 
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

int main() {
	cin.sync_with_stdio(0);

	int k, q, r, b, kn, p; 
	k = 1; 
	q = 1; 
	r = 2; 
	b = 2; 
	kn = 2; 
	p = 8; 

	int ki, qi, ri, bi, kni, pi; 
	cin >> ki >> qi >> ri >> bi >> kni >> pi; 
	int dk = k - ki; 
	int dq = q - qi; 
	int dr = r - ri; 
	int db = b - bi; 
	int dkn = kn - kni; 
	int dp = p - pi; 

	cout << dk << " " << dq << " " << dr << " " << db << " " << dkn << " "<< dp << " " << endl;   
}