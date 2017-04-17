#include <iostream>
#include <algorithm> 
#include <vector>
#include <set>
#include "prettyprint.hpp"
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define scanf nope
#define endl '\n'
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

int main() {
	cin.sync_with_stdio(0);

	auto sortY = [](const ii &a, const ii &b) { return a.second < b.second; };
	int N, x, y;
	set<ii> pointsX;
	set<ii, decltype(sortY)> pointsY { sortY };  

	cin >> N; 
	while (N--) {
		cin >> x >> y; 
		pointsX.insert({x, y});
		pointsY.insert({x, y});
	} 

	int numOfPoints = 0; 

	for (auto xit = pointsX.begin(); xit != pointsX.end(); xit++) {
		auto yit = pointsY.find(*xit);
		ii startPoint = *xit; 

		auto xit1 = xit; 
		int xPoints = 0; 

		while (xit1 != pointsX.end() && xit1 -> first == startPoint.first) {
			xit1++; 
			xPoints++; 
		}

		auto xit2 = xit;

		while (xit2 != pointsX.begin() && xit2 -> first == startPoint.first) {
			xit2--; 
			xPoints ++; 
		}

		auto yit2 = yit; 
		int yPoints = 0; 

		while (yit2 != pointsY.end() && yit2 -> second == startPoint.second) {
			yit2++; 
			yPoints++; 
		}

		while (yit != pointsY.begin() && yit -> second == startPoint.second) {
			yit--; 
			yPoints++; 
		}
		numOfPoints += yPoints * xPoints;
	}
	cout << numOfPoints << endl; 
	cout << numOfPoints << endl;
}