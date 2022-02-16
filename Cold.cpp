/*******************************************************************
	Sam McGuire
	Cold-puter Science [ https://open.kattis.com/problems/cold ]	
	16 February 2022
*******************************************************************/

#include <iostream>

using namespace std;

int main() {
	int numTemperatures, numTempsBelowZero = 0;
	
	cin >> numTemperatures;
	int temperatures[numTemperatures];

	for(int i = 0; i < numTemperatures; i++) {
		cin >> temperatures[i];

		if(temperatures[i] < 0)
			numTempsBelowZero++;
	}

	cout << numTempsBelowZero;

	return 0;
}