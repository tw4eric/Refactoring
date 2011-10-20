#include <gtest/gtest.h>
#include "factorial.h"
#include <iostream>

TEST(FactorialTestGroup, FactOfTwoIsTwo)
{
    EXPECT_EQ(2,factorial(2));
}




TEST(FactorialTestGroup, FactOfNegativeOrZeroIsOne)
{
    EXPECT_EQ(1,factorial(-2));
    EXPECT_EQ(1,factorial(0));
}


TEST(FactorialTestGroup, FactOfThreeIsSix)
{
    EXPECT_EQ(6,factorial(3));
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
} 

