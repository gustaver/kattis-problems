#include <algorithm> 
#include <vector> 
#include <iostream> 
#include <set> 
#include <cmath>
#include <float.h>
#include <iomanip>
#define pi 3.14159265358979323846
//#include "prettyprint.hpp"
using namespace std;

#define earthRadiusKm 6371.0
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<double, double> dd;
typedef vector<int> vi;

// This function converts decimal degrees to radians
double deg2rad(double deg) {
  return (deg * pi / 180);
}

double haversine(double lat1,double lng1,double lat2,double lng2){
    double radLat1 = deg2rad(lat1);
	double radLat2 = deg2rad(lat2);
	double a = radLat1 - radLat2;
	double b = deg2rad(lng1) - deg2rad(lng2);
	double s = 2 * asin(sqrt(pow(sin(a/2),2) +cos(radLat1)*cos(radLat2)*pow(sin(b/2),2)));
	return s;
}

int main() {
	cin.sync_with_stdio(0);
	
	int numberOfAirports; 

	while (cin >> numberOfAirports) {
		vector<dd> airports;  
		for (int i = 0; i < numberOfAirports; i++) {
			double lat, lon; 
			cin >> lat >> lon; 
			airports.push_back(dd(lat, lon));
		}

		if (numberOfAirports == 1) {
			cout << fixed << setprecision(2) << airports[0].first << " " << airports[0].second << endl;
		} else { 
			double smallesMaxDistance = DBL_MAX;
			int indexSmallest = 0; 
			for (int i = 0; i < numberOfAirports; i++) {
				double distance = 0;
				dd current = airports[i];
				for (int j = 0; j < numberOfAirports; j++) { 
					if (j != i) {
						dd compare = airports[j];
						distance = max(haversine(current.first, current.second, compare.first, compare.second), distance);
					}
				}
				if (distance <= smallesMaxDistance) {
					smallesMaxDistance = distance; 
					indexSmallest = i;
				}
			}
			cout << fixed << setprecision(2) << airports[indexSmallest].first << " " << airports[indexSmallest].second << endl;
		}
	}
}