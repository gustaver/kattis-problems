#include <algorithm> 
#include <vector> 
#include <iostream> 
#include <set> 
#include <cmath>
#include <float.h>
#include <iomanip>
#define pi 3.14159265358979323846
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<double, double> dd;
typedef vector<int> vi;

int main() {
	cin.sync_with_stdio(0);
	int oil, bottle_large, bottle_small; 
	cin >> oil >> bottle_large >> bottle_small;

	int A = oil / bottle_large;
	int B = 0; 

	while (A >= 0) {
		int gap = oil - A * bottle_large; 
		if (gap % bottle_small == 0) {
			B = gap / bottle_small; 
			cout << A << " " << B << endl; 
			return 0; 
		} else {
			A--; 
		}
	}

	cout << "Impossible" << endl; 
}