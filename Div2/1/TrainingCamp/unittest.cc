#include "answer.h"
#include "gtest/gtest.h"

TEST(TrainingCamp, Test1) {
	vstr a;
	a.push_back("XXX");
	a.push_back("XXX");
	a.push_back("XX-");
	vstr p;
	p.push_back("---");
	p.push_back("XXX");
	p.push_back("-XX");
	p.push_back("XX-");
	vstr e;
	e.push_back("XXXX");
	e.push_back("XXXX");
	e.push_back("X--X");

	vstr r = TrainingCamp::determineSolvers(a, p);
	EXPECT_EQ(e, r);
}

TEST(TrainingCamp, Test2) {
	vstr a;
	a.push_back("-XXXX");
	a.push_back("----X");
	a.push_back("XXX--");
	a.push_back("X-X-X");
	vstr p;
	p.push_back("X---X");
	p.push_back("-X---");
	p.push_back("XXX--");
	p.push_back("--X--");
	vstr e;
	e.push_back("-X-X");
	e.push_back("----");
	e.push_back("-XXX");
	e.push_back("X--X");

	vstr r = TrainingCamp::determineSolvers(a, p);
	EXPECT_EQ(e, r);
}
    	
TEST(TrainingCamp, Test3) {
	vstr a;
	a.push_back("-----");
	a.push_back("XXXXX");
	vstr p;
	p.push_back("XXXXX");
	p.push_back("-----");
	p.push_back("--X-X");
	vstr e;
	e.push_back("-X-");
	e.push_back("XXX");

	vstr r = TrainingCamp::determineSolvers(a, p);
	EXPECT_EQ(e, r);
}
    	
TEST(TrainingCamp, Test4) {
	vstr a;
	a.push_back("-");
	a.push_back("X");
	a.push_back("X");
	a.push_back("-");
	a.push_back("X");
	vstr p;
	p.push_back("-");
	p.push_back("X");
	vstr e;
	e.push_back("X-");
	e.push_back("XX");
	e.push_back("XX");
	e.push_back("X-");
	e.push_back("XX");

	vstr r = TrainingCamp::determineSolvers(a, p);
	EXPECT_EQ(e, r);
}
    	
TEST(TrainingCamp, Test5) {
	vstr a;
	a.push_back("X----X--X");
	a.push_back("X--X-X---");
	a.push_back("--X-X----");
	a.push_back("XXXX-X-X-");
	a.push_back("XXXX--XXX");
	vstr p;
	p.push_back("X----X-X-");
	p.push_back("-----X---");
	p.push_back("-X----X-X");
	p.push_back("-X-X-X---");
	p.push_back("-----X---");
	p.push_back("X-------X");
	vstr e;
	e.push_back("-X--XX");
	e.push_back("-X--X-");
	e.push_back("------");
	e.push_back("XX-XX-");
	e.push_back("--X--X");

	vstr r = TrainingCamp::determineSolvers(a, p);
	EXPECT_EQ(e, r);
}
