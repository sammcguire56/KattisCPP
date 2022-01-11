/*
	Sam McGuire
	SMIL [ https://open.kattis.com/problems/smil ]
	10 January 2022
*/

#include <iostream>

using namespace std;

int main() {
	string symbols;
	int smileIndex;		//	String index at which a smile begins.

	cin >> symbols;

	for(int i = 0; i < symbols.length(); i++) {
		//	A smile begins with either a ':' or a ';'
		if(symbols[i] == ':' || symbols[i] == ';') {
			//	Check for a mouth.
			if(symbols[i+1] == ')') {
				cout << i << endl;
			}
			//	If a mouth isn't found, look for a nose.
			else if(symbols[i+1] == '-') {
				//	If we have a nose, look for a mouth.
				if(symbols[i+2] == ')') {
					cout << i << endl;
				}
			}
		}
	}

	return 0;
}