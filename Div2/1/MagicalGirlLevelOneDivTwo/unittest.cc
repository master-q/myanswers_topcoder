#include "answer.h"
#include "gtest/gtest.h"

TEST(MagicalGirlLevelOneDivTwo, Test1) {
	EXPECT_EQ(7.0710678118654755,
	    MagicalGirlLevelOneDivTwo::theMinDistance(5, 10, 10));
}
TEST(MagicalGirlLevelOneDivTwo, Test2) {
	EXPECT_EQ(5.0,
	    MagicalGirlLevelOneDivTwo::theMinDistance(5, 10, 3));
}
TEST(MagicalGirlLevelOneDivTwo, Test3) {
	EXPECT_EQ(3.1622776601683795,
	    MagicalGirlLevelOneDivTwo::theMinDistance(5, -8, -6));
}
TEST(MagicalGirlLevelOneDivTwo, Test4) {
	EXPECT_EQ(0.0,
	    MagicalGirlLevelOneDivTwo::theMinDistance(5, 3, 2));
}
TEST(MagicalGirlLevelOneDivTwo, Test5) {
	EXPECT_EQ(0.0,
	    MagicalGirlLevelOneDivTwo::theMinDistance(24, 24, -24));
}
TEST(MagicalGirlLevelOneDivTwo, Test6) {
	EXPECT_EQ(126.0,
	    MagicalGirlLevelOneDivTwo::theMinDistance(345, -471, 333));
}
