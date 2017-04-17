#include <algorithm> 
#include <vector> 
#include <iostream> 
#include <set> 
#include <cmath>
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

	int cases;
	cin >> cases; 

	for (int i = 0; i < cases; i++) {
		double calories; 
		cin >> calories; 
		cout << ceil(calories / 400) << endl; 
	}
}