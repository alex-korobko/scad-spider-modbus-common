#include "../models/message.hpp"
#include <gtest/gtest.h>

TEST(message_test, MessageCreationTest)
{
    std::string text = "message1";
    unsigned int type = 1;
    unsigned int id = 1;
    message message_to_test(id, text, type);
    EXPECT_EQ(message_to_test.get_text(), text);
    EXPECT_EQ(message_to_test.get_type(), type);
    EXPECT_EQ(message_to_test.get_id(), id);
}