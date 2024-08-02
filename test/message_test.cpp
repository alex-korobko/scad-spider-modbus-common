#include "../models/message.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(MessageTest)
BOOST_AUTO_TEST_CASE(MessageCreationTest)
{
    std::string text = "message1";
    unsigned int type = 1;
    unsigned int id = 1;
    message message_to_test(id, text, type);
    BOOST_TEST_REQUIRE(message_to_test.get_text() == text);
    BOOST_TEST_REQUIRE(message_to_test.get_type() == type);
    BOOST_TEST_REQUIRE(message_to_test.get_id() == id);
}
BOOST_AUTO_TEST_SUITE_END()
