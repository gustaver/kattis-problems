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

	int dog1agg, dog1calm, dog2agg, dog2calm;
	cin >> dog1agg >> dog1calm >> dog2agg >> dog2calm;
	int sumd1 = dog1agg + dog1calm; 
	int sumd2 = dog2agg + dog2calm;

	int P, M, G; 
	cin >> P >> M >> G; 
	vector<int> heros; 
	heros.push_back(P);
	heros.push_back(M);
	heros.push_back(G);

	for (auto num : heros) {
		int rem1 = num % sumd1; 
		int rem2 = num % sumd2; 
		int numdogs = 0; 

		if (rem1 <= dog1agg && rem1 != 0) {
			numdogs++; 
		}
		if (rem2 <= dog2agg && rem2 != 0) {
			numdogs++; 
		}

		if (numdogs == 0) {
			cout << "none" << endl; 
		} else if (numdogs == 1) {
			cout << "one" << endl;
		} else {
			cout << "both" << endl; 
		}
	}
}