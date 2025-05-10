#include <gtest/gtest.h>
#include <gmock/gmock.h>

int main()
{
    ::testing::InitGoogleTest();
    ::testing::InitGoogleMock();

    return RUN_ALL_TESTS();
}
