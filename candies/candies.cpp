#include <iostream>
#include <sstream> 
#include <string>
#include <climits>

using namespace std;

int main() {
	long numberOfTestCases;
	cin >> numberOfTestCases;
	while (numberOfTestCases--) {
		// Initiate values
		long numberOfChilden = 0; 
		long sum = 0; 
		long numberOfCandies = 0; 
		long rem = 0; 
		// Get number of children
		cin >> numberOfChilden; 
		for (int i = 0; i < numberOfChilden; i++) {
			// Read input for number of children
			cin >> numberOfCandies; 
			// Get remainder 
			rem = numberOfCandies % numberOfChilden; 
			sum += rem; 
		}
		// Check if can be distributed amongst children 
		if (sum % numberOfChilden == 0) {
			cout << "YES" << endl; 
		} else {
			cout << "NO" << endl;
		} 	
	}
   	return 0;	
}
