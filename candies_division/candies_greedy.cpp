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

	int N; 
	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			cout << i-1 << " "; 
		}
	}
}