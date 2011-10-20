#include <iostream>
#include <gtest/gtest.h>

using namespace std;


//TEST(GroupOfTests, IndividualTestName)
TEST(SimpleTestGurgaon, ThreeTimesTwoIsSixOnlyInGurgaon)
{
  EXPECT_EQ(6,3*2);
}


int main(int argc, char** argv)
{

  cout<<"Going to run simple test..."<<endl;
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();

}
