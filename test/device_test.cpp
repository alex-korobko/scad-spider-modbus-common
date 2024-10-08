#include "../models/device.hpp"
#include "../models/device_block.hpp"
#include "../models/message.hpp"
#include "../models/block_signal.hpp"
#include "../models/block_parameter.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE( DeviceTests )

BOOST_AUTO_TEST_CASE( DeviceCreationTest)
{
    unsigned int id = 1;
    unsigned int order_number = 3;
    std::string ip_address = "172.168.25.3";
    bool is_enabled = true;
    device device_to_test(id, order_number, ip_address, is_enabled, std::vector<device_block>(), std::vector<message>());
    BOOST_TEST_REQUIRE(device_to_test.get_id() == id);
    BOOST_TEST_REQUIRE(device_to_test.get_order_number() == order_number);
    BOOST_TEST_REQUIRE(device_to_test.get_ip_address() == ip_address);
    BOOST_TEST_REQUIRE(device_to_test.is_enabled() == is_enabled);
    BOOST_TEST_REQUIRE(device_to_test.get_blocks().size() == 0);
    BOOST_TEST_REQUIRE(device_to_test.get_messages().size() == 0);
}

BOOST_AUTO_TEST_CASE( DeviceBlockManipulationTest )
{
    unsigned int block_id = 1;
    std::string block_name = "block1";
    device_block block_to_test(block_id, block_name, std::vector<block_signal>(), std::vector<block_parameter>());
    unsigned int id = 1;
    unsigned int order_number = 3;
    std::string ip_address = "172.168.23.3";
    bool is_enabled = true;
    std::vector<device_block> new_blocks;
    new_blocks.push_back(block_to_test);
    device device_to_test(id, order_number, ip_address, is_enabled, new_blocks, std::vector<message>());
    std::vector<device_block> blocks = device_to_test.get_blocks();
    BOOST_TEST_REQUIRE(blocks.size() == 1);
    BOOST_TEST_REQUIRE(blocks[0].get_id() == block_id);
    BOOST_TEST_REQUIRE(blocks[0].get_name() == block_name);
}

BOOST_AUTO_TEST_CASE(DeviceMessageManipulationTest)
{
    unsigned int message_id = 1;
    std::string message_text = "message1";
    unsigned int message_type = 1;
    message message_to_test(message_id, message_text, message_type);
    unsigned int id = 1;
    unsigned int order_number = 3;
    std::string ip_address = "172.168.22.33";
    bool is_enabled = true;

    std::vector<message> new_messages;
    new_messages.push_back(message_to_test);
    device device_to_test(id, order_number, ip_address, is_enabled, std::vector<device_block>(), new_messages);
    std::vector<message> messages = device_to_test.get_messages();
    BOOST_TEST_REQUIRE(messages.size() = 1);
    BOOST_TEST_REQUIRE(messages[0].get_id() == message_id);
    BOOST_TEST_REQUIRE(messages[0].get_text() == message_text);
    BOOST_TEST_REQUIRE(messages[0].get_type() == message_type);
}

BOOST_AUTO_TEST_SUITE_END()
