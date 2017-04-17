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

	int loops; 
	cin >> loops; 

	for (int i = 1; i <= loops; i++) {
		cout << i << " Abracadabra" << endl; 
	}
}