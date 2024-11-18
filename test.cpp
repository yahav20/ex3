#include <gtest/gtest.h>
#include "math.h"

TEST(AdditionTest , PositiveNumbers){
    EXPECT_EQ(add(1,2),3);
}

int main(int argc , char **argv){
    ::testing::InitGoogleTest(&args,argv);
    return RUN_ALL_TESTS();
}
