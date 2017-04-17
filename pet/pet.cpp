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

	set<ii> pointsContestant;  

	int p1, p2, p3, p4;
	int contestant = 1;  
	while (cin >> p1 >> p2 >> p3 >> p4) {
		int sum = p1 + p2 + p3 + p4; 
		pointsContestant.insert(ii(sum, contestant));
		contestant++; 
	} 
	auto max = pointsContestant.end();
	max--; 
	cout << max -> second << " " << max -> first << endl;  
}