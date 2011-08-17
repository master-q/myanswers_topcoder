#include "answer.h"
#include "gtest/gtest.h"

TEST(MarbleDecoration, Test1) {
	EXPECT_EQ(0, MarbleDecoration::maxLength(0, 0, 0));
}
TEST(MarbleDecoration, Test2) {
	EXPECT_EQ(1, MarbleDecoration::maxLength(3, 0, 0));
}
TEST(MarbleDecoration, Test3) {
	EXPECT_EQ(5, MarbleDecoration::maxLength(5, 1, 2));
}
TEST(MarbleDecoration, Test4) {
	EXPECT_EQ(14, MarbleDecoration::maxLength(7, 7, 4));
}
TEST(MarbleDecoration, Test5) {
	EXPECT_EQ(7, MarbleDecoration::maxLength(2, 3, 5));
}
TEST(MarbleDecoration, Test6) {
	EXPECT_EQ(26, MarbleDecoration::maxLength(13, 13, 13));
}
