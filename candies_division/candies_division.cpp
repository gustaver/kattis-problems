#include <algorithm> 
#include <vector> 
#include <iostream> 
#include <set> 
#include <cmath>
#include <float.h>
#include <iomanip>
#include <sstream>
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

	ll candies; 
	cin >> candies;

	vector<int> divisors; 

	int square_root = floor(sqrt(candies));

	for (int i = 1; i < square_root; i++) {
		if (candies % i == 0) {
			cout << i-1 << " ";
			// Check for square root of candies (avoid double)
			if (candies / i != i) {
				int divide = candies / i; 
				divisors.push_back(divide);
			} 
		}
	}

	for (int j = divisors.size() - 1; j >= 0; j--) {
		cout << divisors[j]-1 << " ";
	}

	cout << endl; 
}