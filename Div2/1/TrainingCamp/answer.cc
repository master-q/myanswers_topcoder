#include "answer.h"
#include <cmath>
#include <algorithm>
using namespace std;

// TrainingCamp
// http://community.topcoder.com/stat?c=problem_statement&pm=11499

int mplus (char a, char p) {
	return (a == '-' && p == 'X') ? 0 : 1;
}

vstr TrainingCamp::determineSolvers (vstr attendance, vstr problemTopics) {
	// xxx ここでattendanceとproblemTopicsのサイズチェックが必要

	vstr solve;
	for (unsigned int i = 0; i < attendance.size(); i++) {
		string onesolve;
		for (unsigned int j = 0; j < problemTopics.size(); j++) {
			unsigned int can_solve = 0;
			for (unsigned int k = 0; k < attendance[i].size(); k++) {
				can_solve +=
				    mplus(attendance[i][k], problemTopics[j][k]);
			}
			onesolve.append((can_solve == attendance[i].size())
			    ? "X" : "-");
		}
		solve.push_back(onesolve);
	}
	return solve;
}
