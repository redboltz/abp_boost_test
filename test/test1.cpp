#define BOOST_TEST_MODULE abp_boost_test

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(tes1)

BOOST_AUTO_TEST_CASE( case1 ) {
    BOOST_TEST(true);
}

BOOST_AUTO_TEST_SUITE_END()
