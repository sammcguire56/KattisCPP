/*******************************************************
	Sam McGuire
	Dicecup [ https://open.kattis.com/problems/dicecup ]
	17 February 2022
*******************************************************/

#include <iostream>

using namespace std;

int main() {
	int dieA, dieB;

	cin >> dieA;
	cin >> dieB;

	if (dieA > dieB)
		swap(dieA, dieB);

	if (dieA == dieB)
		cout << (dieA + 1) << endl;
	else {
		for(int i = (dieA + 1); i < (dieB + 2); i++) {
			cout << i << endl;
		}
	}

	return 0;
}