#include "google/gtest/include/gtest/gtest.h"
#include "google/gmock/include/gmock/gmock.h"
#include <boost/lexical_cast.hpp>

int sum(int a, int b) { return a+b ; }

TEST(Suite, Sum){
   EXPECT_EQ(5, sum(2, 3));   
}

TEST(Suite, cpp11){
   for(int i : {1 ,2 ,3 ,4})
      ASSERT_TRUE(i < 5);
}

int main(int argc, char ** argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}