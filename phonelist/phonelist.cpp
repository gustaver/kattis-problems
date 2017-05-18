#include <algorithm> 
#include <vector> 
#include <iostream> 
#include <set> 
#include <map>
#include <cmath>
#include <float.h>
#include <iomanip>
#include <sstream>
#define pi 3.14159265358979323846
#include "prettyprint.hpp"
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


struct Node {
	int number; 
	map<int,Node> nodes;
};

class PhoneTree {
	public: 
		Node root; 

	PhoneTree(vector<int> numbers) {
		Node initial; 
		root = initial; 
		// Set root 
		root.number = numbers[0];
		// Create initial next 
		Node next; 
		next.number = numbers[1];
		// Attach to root 
		root.nodes[next.number] = next;
		// Create trailing node 
		Node prev;
		prev = next; 

		for (int i = 2; i < numbers.size(); i++) { 
			int digit = numbers[i];
			// Create next node 
			Node next_loop; 
			next_loop.number = digit;

			// Attach to previous node 
			prev.nodes[digit] = next_loop; 
			cout << "ROOT HAS MAP SIZE: " << root.nodes.size() << endl; 
			cout << "1st NODE HAS MAP SIZE " << root.nodes[1].nodes.size() << endl; 
			cout << "2nd NODE HAS MAP SIZE " << root.nodes[1].nodes[1].nodes.size() << endl; 

			// Update previous node 
			prev = next_loop; 
		}
	}

	void traverse(vector<int> numbers) {
		cout << "TRAVERSING TREE" << endl; 
		Node next;
		next = root;
		cout << "NODE NUMBER: " << next.number << endl;
		for (int i = 1; i < numbers.size(); i++) {
			next = next.nodes[numbers[i]];
			cout << "NODE NUMBER: " << next.number << endl; 
		}
	}

	bool query(vector<int> numbers) {
		return true; 
	}
};

int main() {
	cin.sync_with_stdio(0);

	int tests; 
	cin >> tests; 

	for (int i = 0; i < tests; i++) {
		int numbers; 
		cin >> numbers;

		for (int j = 0; j < numbers; j++) {
			int number; 
			cin >> number; 

			vector<int> numbers_vector; 
			// Convert number into vector of digits 
			while (number) {
				int digit = number % 10; 
				numbers_vector.push_back(digit);
				number /= 10; 
			}
			// TODO: Reversing the vector afterwards is a bit inefficient 
			reverse(numbers_vector.begin(), numbers_vector.end());
			cout << "VECTOR BEING USED: " << numbers_vector << endl;
			PhoneTree phone_tree(numbers_vector); 
			phone_tree.traverse(numbers_vector);
		}
	}
}