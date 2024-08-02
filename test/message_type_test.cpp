#include "../models/message_type.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(MessageTypeTest)
BOOST_AUTO_TEST_CASE(MessageTypeCreationTest)
{
    std::string description = "message1";
    unsigned int color = 0xfffff;
    unsigned int id = 1;
    message_type message_type_to_test(id, description, color);
    BOOST_TEST_REQUIRE(message_type_to_test.get_description() == description);
    BOOST_TEST_REQUIRE(message_type_to_test.get_color() == color);
    BOOST_TEST_REQUIRE(message_type_to_test.get_id() == id);
}

BOOST_AUTO_TEST_SUITE_END()
