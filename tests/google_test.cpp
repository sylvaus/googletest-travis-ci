//
// Created by silvos on 22.02.18.
//

#include "gtest/gtest.h"
#include "../algo.h"

namespace
{


TEST(FactorialTest, Negative)
{
    EXPECT_EQ(1, algo::add_one(0));
    EXPECT_EQ(2, algo::add_one(1));
    EXPECT_EQ(3, algo::add_one(2));
}

} // namespace

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}