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

	int skip; 
	cin >> skip; 
	int a; 

	while (cin >> a) {
		if (a % 2 == 0) {
			cout << a << " is even" << endl; 
		} else {
			cout << a << " is odd" << endl; 
		}
	}
}