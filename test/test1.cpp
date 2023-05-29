#define BOOST_TEST_MODULE abp_boost_test

#include <boost/test/unit_test.hpp>
#include <string>

BOOST_AUTO_TEST_SUITE(tes1)

BOOST_AUTO_TEST_CASE( case1 ) {
    int i = 42;
    int j = 42;
    BOOST_TEST(true);
    BOOST_TEST(i == j);
    std::string s1 = "ABC";
    std::string s2 = "ABC";
    BOOST_TEST(s1 == s2);
}


BOOST_AUTO_TEST_SUITE_END()
