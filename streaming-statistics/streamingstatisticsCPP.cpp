#include <iostream>
#include <vector>

using namespace std;

class Song {
	public: 
		double startTime; 
		double endTime; 
		double kiloBits; 
		double playTime;
		Song (double end, double kbps, double play) {
			startTime = end - play; 
			endTime = end; 
			kiloBits = kbps; 
			playTime = play; 
		}
		double getKiloBits (void) {
			return kiloBits;
		}

		double calculateBitsForTimeInterval (double intervalStart, double intervalEnd) {
			long totalPlayTime; 
			double totalKiloBits;
			double totalBits; 
			if (intervalStart >= endTime || intervalEnd <= startTime) {
				return 0; 
			}
			else if (intervalStart <= startTime && intervalEnd <= endTime) {
				totalPlayTime = intervalEnd - startTime;
				totalKiloBits = totalPlayTime * kiloBits;
				totalBits = totalKiloBits / 1000; 
				return totalBits; 
			}
			else if (intervalStart <= startTime && intervalEnd >= endTime) {
				totalKiloBits = playTime * kiloBits;
				totalBits = totalKiloBits / 1000;
				return totalBits;
			}
			else if (intervalStart >= startTime && intervalEnd <= endTime) {
				totalPlayTime = intervalEnd - intervalStart;
				totalKiloBits = totalPlayTime * kiloBits;
				totalBits = totalKiloBits / 1000; 
				return totalBits;
			}
			else {
				totalPlayTime = endTime - intervalStart;
				totalKiloBits = totalPlayTime * kiloBits;
				totalBits = totalKiloBits / 1000; 
				return totalBits;
			}
		}
};

int main (){
	cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);
	long numberOfSongs;
	cin >> numberOfSongs;  
	std::vector<Song> songs;
	for (int i = 0; i < numberOfSongs; i++) {
		double end; 
		double play; 
		double kbps; 
		cin >> end >> play >> kbps; 
		Song song(end, kbps, play);
		songs.push_back(song);
	}
	long numberOfQueries; 
	cin >> numberOfQueries;
	double queries [numberOfQueries];
	for (int i = 0; i < numberOfQueries; i++) {
		double queryStart;
		double queryEnd; 
		cin >> queryStart >> queryEnd; 
		double total; 
		total = 0;
		for(int j = 0; j < numberOfSongs; j++) { 
			total += songs[j].calculateBitsForTimeInterval(queryStart, queryEnd);
		}
		cout << total << endl;
	}
}