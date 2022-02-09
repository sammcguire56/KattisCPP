/*******************************************************
	Sam McGuire
	Bijele [ https://open.kattis.com/problems/bijele ]
	10 January 2022
*******************************************************/

#include <iostream>

using namespace std;

const int NUM_KINGS = 1;
const int NUM_QUEENS = 1;
const int NUM_ROOKS = 2;
const int NUM_BISHOPS = 2;
const int NUM_KNIGHTS = 2;
const int NUM_PAWNS = 8;

int	pieceCount(int piecesInPossession, int piecesRequired) {
	int numPieces;

	numPieces = piecesRequired - piecesInPossession;

	return numPieces;
}

int main() {
	int kings, queens, rooks, bishops, knights, pawns;
	int kingsNeeded, queensNeeded, rooksNeeded, bishopsNeeded, knightsNeeded, pawnsNeeded;

	cin >> kings;
	cin >> queens;
	cin >> rooks;
	cin >> bishops;
	cin >> knights;
	cin >> pawns;

	kingsNeeded = pieceCount(kings, NUM_KINGS);
	queensNeeded = pieceCount(queens, NUM_QUEENS);
	rooksNeeded = pieceCount(rooks, NUM_ROOKS);
	bishopsNeeded = pieceCount(bishops, NUM_BISHOPS);
	knightsNeeded = pieceCount(knights, NUM_KNIGHTS);
	pawnsNeeded = pieceCount(pawns, NUM_PAWNS);

	cout << kingsNeeded << " " << queensNeeded << " " << rooksNeeded << " " << bishopsNeeded << " " << knightsNeeded << " " << pawnsNeeded << endl;

	return 0;
}