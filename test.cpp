#include <iostream>
#include <stdlib.h> 
#include "auto.hpp"
#include <gtest/gtest.h>

using namespace std;

TEST(BMW, CheckConstructor) 
{
	BMW b = BMW("black",100);
	ASSERT_EQ(100, b.getSpeed());
	ASSERT_EQ("black", b.getColour());
	
}

TEST(BMW, CheckGo) 
{
	BMW b = BMW("black",100);
	ASSERT_EQ(100, b.getSpeed());
	ASSERT_EQ("black", b.getColour());
}


class BMWF: public testing::Test {
public:
   void SetUp( ) {
   }
 
   void TearDown( ) {
   }
};


TEST_F(BMWF, CheckGoF) 
{
	BMW b = BMW("black",100);
	ASSERT_EQ(100, b.getSpeed());
	ASSERT_EQ("black", b.getColour());
}

int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
