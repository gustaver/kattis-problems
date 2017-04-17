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

	set<int> remainders; 
	int a; 

	while (cin >> a) {
		int remainder = a % 42; 
		remainders.insert(remainder); 
	}

	cout << remainders.size() << endl; 
}