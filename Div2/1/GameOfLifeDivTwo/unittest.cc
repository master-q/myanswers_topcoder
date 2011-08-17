#include "answer.h"
#include "gtest/gtest.h"

TEST(GameOfLifeDivTwo, Test1) {
	EXPECT_EQ("00000", GameOfLifeDivTwo::theSimulation("01010", 2));
}
TEST(GameOfLifeDivTwo, Test2) {
	EXPECT_EQ("101010", GameOfLifeDivTwo::theSimulation("010101", 5));
}
TEST(GameOfLifeDivTwo, Test3) {
	EXPECT_EQ("111111", GameOfLifeDivTwo::theSimulation("111010", 58));
}
TEST(GameOfLifeDivTwo, Test4) {
	EXPECT_EQ("111111111",
	    GameOfLifeDivTwo::theSimulation("111111111", 511));
}
TEST(GameOfLifeDivTwo, Test5) {
	EXPECT_EQ("110000000001111110000000000001",
	    GameOfLifeDivTwo::theSimulation("110010000010111110010100001001", 1000));
}
TEST(GameOfLifeDivTwo, Test6) {
	EXPECT_EQ("00101110011",
	    GameOfLifeDivTwo::theSimulation("00101110011", 0));
}
