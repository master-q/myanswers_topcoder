#include "answer.h"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// MarbleDecoration
// http://community.topcoder.com/stat?c=problem_statement&pm=11287

int MarbleDecoration::maxLength(int r, int g, int b) {
	vector<int> m;
	m.push_back(r);
	m.push_back(g);
	m.push_back(b);
	sort(m.begin(), m.end());

	if (m[2] == 0) {
		return 0;
	} else if (m[1] == 0) {
		return 1;
	} else if (m[2] == m[1]) {
		return m[2] * 2;
	} else {
		return m[1] * 2 + 1;
	}
}
