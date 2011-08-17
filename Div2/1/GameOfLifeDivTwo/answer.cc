#include "answer.h"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// GameOfLifeDivTwo
// http://community.topcoder.com/stat?c=problem_statement&pm=11483

char liveOrDie(string lifes, unsigned int pos) {
	string threeCells;

	if (pos == 0) {
		threeCells += lifes[lifes.size() - 1];
		threeCells += lifes.substr(0, 2);
	} else if (pos == lifes.size() - 1) {
		threeCells += lifes.substr(pos - 1, 2);
		threeCells += lifes[0];
	} else {
		threeCells += lifes.substr(pos - 1, 3);
	}

	int numLives = 0;
	for (unsigned int i = 0; i < threeCells.size(); i++) {
		if (threeCells[i] == '1') {
			numLives++;
		}
	}

	return (numLives >= 2) ? '1' : '0';
}

string GameOfLifeDivTwo::theSimulation(string init, int t) {
	string now, next;

	now = init;
	for (int i = 0; i < t; i++) {
		next = "";
		for (unsigned int j = 0; j < now.size(); j++) {
			next += liveOrDie(now, j);
		}
		now = next;
	}

	return now;
}
