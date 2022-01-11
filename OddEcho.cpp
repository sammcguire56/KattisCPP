/***********************************************************
	Sam McGuire
	Odd Echo [ https://open.kattis.com/problems/oddecho ]	
	10 January 2022
***********************************************************/

#include <iostream>

using namespace std;

int main() {
	int numWords;

	cin >> numWords;

	string words[numWords];

	for(int i = 0; i < numWords; i++) {
		cin >> words[i];
	}

	for(int i = 0; i < numWords; i++) {
		if((i + 1) % 2 == 1) {
			cout << words[i] << endl;
		}
	}

	return 0;
}