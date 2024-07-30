#pragma once
#include <string>
#include "device_block.hpp"
class device
{
private:
    unsigned int id;
    unsigned int order_number;
    std::string ip_address;
    std::vector<device_block> blocks;
    std::vector<message> messages; // device specific messages, override global message by id if exists
    bool enabled;
public:
    device(unsigned int new_id, unsigned int new_order_number, std::string new_ip_address, bool new_enabled, const std::vector<device_block>& new_device_blocks, const std::vector<message>& new_device_messages) : id(new_id), order_number(new_order_number), ip_address(new_ip_address), enabled(new_enabled), blocks(new_device_blocks), messages(new_device_messages) {}
    const unsigned int get_id()
    {
        return this->id;
    }
    const unsigned int get_order_number()
    {
        return this->order_number;
    }
    const std::string &get_ip_address()
    {
        return this->ip_address;
    }
    const bool is_enabled()
    {
        return this->enabled;
    }
    const std::vector<device_block> &get_blocks()
    {
        return this->blocks;
    }
    const std::vector<message> &get_messages()
    {
        return this->messages;
    }
};
