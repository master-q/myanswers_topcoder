#include "answer.h"
#include "gtest/gtest.h"

TEST(TrainingCamp, Test1) {
	vector<int> jtype;
	jtype.push_back(2);
	EXPECT_EQ("YES", MagicalGirlLevelTwoDivTwo::isReachable(jtype, 5, 4));
}

TEST(TrainingCamp, Test2) {
	vector<int> jtype;
	jtype.push_back(3);
	EXPECT_EQ("NO", MagicalGirlLevelTwoDivTwo::isReachable(jtype, 5, 4));
}
TEST(TrainingCamp, Test3) {
	vector<int> jtype;
	for (int i = 1; i <= 10; i++) {
		jtype.push_back(i);
	}
	EXPECT_EQ("YES", MagicalGirlLevelTwoDivTwo::isReachable(jtype, -30, 27));
}
TEST(TrainingCamp, Test4) {
	vector<int> jtype;
	jtype.push_back(29);
	EXPECT_EQ("NO", MagicalGirlLevelTwoDivTwo::isReachable(jtype, 29, 0));
}
