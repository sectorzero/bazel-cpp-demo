#include "loader/loader.h"
#include <gtest/gtest.h>

TEST(LoaderTest, BasicSanity) {
    Loader loader;
    EXPECT_EQ((uint32_t)32, loader.get_answer());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
