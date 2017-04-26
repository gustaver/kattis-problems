#include <algorithm> 
#include <vector> 
#include <iostream> 
#include <set> 
//#include "prettyprint.hpp"
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

	int N, L; 
	cin >> N >> L; 

	int travelTime = L;
	int timeElapsed = 0;
	int previousTL = 0;    

	for (int i = 0; i < N; i++) {
		int D, R, G; 
		cin >> D >> R >> G;

		timeElapsed += D - previousTL;
		previousTL = D;   

		int sum = R + G; 
		int rem = timeElapsed % sum; 
		if (rem < R) {
			int waitTime = R - rem; 
			travelTime += waitTime;
			timeElapsed += waitTime;
		} 
	}

	cout << travelTime << endl; 
}