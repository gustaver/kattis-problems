#include <iostream>
using namespace std;

long long recur(int a, int c, int m, int prev) {
	long long ans = 0; 

	if (a == 0 && c == 0 && m == 0) 
		return 0;

	if (a != 0 && prev != 0) 
		ans += 1 + recur(--a, c, m, 0);
	if (c != 0 && prev != 1) 
		ans += 1 + recur(a, --c, m, 1);
	if (m != 0 && prev != 2)
		ans += 1 + recur(a, c, --m, 2);

	return ans; 
}

int main() {
	cin.sync_with_stdio(0);
	
	int A, M, C; 
	cin >> A >> M >> C; 

	cout << recur(A, M, C, 9999) << endl; 

	return 0;
}
