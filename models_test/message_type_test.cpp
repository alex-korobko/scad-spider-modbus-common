#include "../models/message_type.hpp"
#include <gtest/gtest.h>

TEST(message_type_test, MessageTypeCreationTest)
{
    std::string description = "message1";
    unsigned int color = 0xfffff;
    unsigned int id = 1;
    message_type message_type_to_test(id, description, color);
    EXPECT_EQ(message_type_to_test.get_description(), description);
    EXPECT_EQ(message_type_to_test.get_color(), color);
    EXPECT_EQ(message_type_to_test.get_id(), id);
}