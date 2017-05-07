#include <algorithm> 
#include <vector> 
#include <iostream> 
#include <set> 
#include <cmath>
#include <float.h>
#include <iomanip>
//#include "prettyprint.hpp"
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

int p, a, b, c, d;

double price(int k) {
	return p*(sin((a*k)+b)+cos((c*k)+d)+2);
}

int main() {
	cin.sync_with_stdio(0);

	int n; 
	cin >> p >> a >> b >> c >> d >> n;

	vector<double> prices;

	bool always_increasing = true; 
	double prev = -0.1; 
	for (int i = 1; i <= n; i++) {
		double price_calculated = price(i); 
		prices.push_back(price_calculated);
		if (price_calculated < prev) {
			always_increasing = false; 
		}
		prev = price_calculated;
	}

	if (always_increasing == true) {
		cout << 0 << endl; 
		return 0;
	}

	double max = -1;
	double max_difference = -1;  

	for (int i = 0; i < prices.size(); i++) {
		double current = prices[i];

		if (current > max) {
			max = current; 
		} else if (current < max && i > 0) {
			double difference = max - current; 
			if (difference > max_difference) {
				max_difference = difference;
			}
		}
	}

	if (max_difference <= 0) {
		cout << 0 << endl; 
	} else {
		cout.precision(17);
		cout << fixed << max_difference << endl; 
	}
}