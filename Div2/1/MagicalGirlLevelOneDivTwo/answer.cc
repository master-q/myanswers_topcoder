#include "answer.h"
#include <cmath>
#include <algorithm>
using namespace std;

double MagicalGirlLevelOneDivTwo::theMinDistance(int d, int x, int y) {
	if (x <= d && x >= -d && y <= d && y >= -d) {
		return 0;
	}

	int ydiff = min(abs(y - d), abs(y + d));
	if (x <= d && x >= -d) {
		return ydiff;
	}
	int xdiff = min(abs(x - d), abs(x + d));
	if (y <= d && y >= -d) {
		return xdiff;
	}

	return sqrt(pow(xdiff, 2) + pow(ydiff, 2));
}
