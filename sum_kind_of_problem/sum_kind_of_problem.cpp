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

long long sumOfPositiveIntegers(int N) {
	return (N * (N + 1)) / 2; 
}

long long sumOfEvenIntegers(int N) {
	return pow(N, 2) + N; 
}

long long sumOfOddIntegers(int N) {
	return pow(N, 2); 
}

int main() {
	cin.sync_with_stdio(0);

	int numberOfTestCases; 
	cin >> numberOfTestCases; 

	for (int i = 0; i < numberOfTestCases; i++) {
		int line, N;  
		cin >> line >> N; 
		auto sum1 = sumOfPositiveIntegers(N); 
		auto sum2 = sumOfEvenIntegers(N);
		auto sum3 = sumOfOddIntegers(N);
		cout << line << " " << sum1 << " " << sum3 << " " << sum2 << endl;
	}
}