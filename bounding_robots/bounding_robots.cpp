#include <algorithm> 
#include <vector> 
#include <iostream> 
#include <set> 
#include <cmath>
#include <float.h>
#include <iomanip>
#include <string>
#define pi 3.14159265358979323846
//#include "prettyprint.hpp"
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define endl '\n'
#define string std::string
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<double, double> dd;
typedef vector<int> vi;

int main() {
	cin.sync_with_stdio(0);

	int w, l;
	while (cin >> w >> l) {
		if (w == 0 || l == 0) {
			continue; 
		}
		int numberOfSteps; 
		cin >> numberOfSteps; 

		int steps = 0; 
		int up_robot = 0, right_robot = 0, up_actual = 0, right_actual = 0;  
		for (int i = 0; i < numberOfSteps; i++) { 
			string direction; 
			cin >> direction >> steps;

			if (direction == "u") {
				up_robot += steps;
				if (up_actual + steps >= l) {
					up_actual = l - 1; 
				} else {
					up_actual += steps;
				}
			} else if (direction == "d") {
				up_robot -= steps;
				if (up_actual - steps < 0) {
					up_actual = 0;  
				} else {
					up_actual -= steps;
				}
			} else if (direction == "r") {
				right_robot += steps;
				if (right_actual + steps >= w) {
					right_actual = w - 1; 
				} else {
					right_actual += steps;
				}
			} else {
				right_robot -= steps;
				if (right_actual - steps < 0) {
					right_actual = 0; 
				} else {
					right_actual -= steps;
				}
			}
		}

		cout << "Robot thinks " << right_robot << " " << up_robot << endl; 

		cout << "Actually at " << right_actual << " " << up_actual << endl; 
		cout << endl; 
	} 
}