#include "answer.h"
#include <cmath>
#include <algorithm>
using namespace std;

// MagicalGirlLevelTwoDivTwo
// http://community.topcoder.com/stat?c=problem_statement&pm=11477

string MagicalGirlLevelTwoDivTwo::isReachable(vector<int> jumpTypes, int x, int y) {
	int ou=0;
	for (vector<int>::iterator j=jumpTypes.begin();j!=jumpTypes.end();j++) {
		if (*j%2==0) {
			ou=1;
		}
	}

	if (ou==1) {
		return "YES";
	} else if ((x+y)%2==0) {
		return "YES";
	} else {
		return "NO";
	}
}
