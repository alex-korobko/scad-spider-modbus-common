#pragma once
#include <string>
#include <vector>
#include "message.hpp"
#include "block_signal.hpp"
#include "block_parameter.hpp"
class device_block
{
private:
    const unsigned int id;
    const std::string name;
    const std::vector<block_signal> signals;
    const std::vector<block_parameter> parameters;

public:
    device_block(unsigned int new_id, const std::string &new_name, const std::vector<block_signal> &new_signals, const std::vector<block_parameter> &new_parameters) : id(new_id), name(new_name), signals(new_signals), parameters(new_parameters) {}
    const unsigned int get_id()
    {
        return this->id;
    }
    const std::string &get_name()
    {
        return this->name;
    }
    const std::vector<block_signal> &get_signals()
    {
        return this->signals;
    }
    const std::vector<block_parameter> &get_parameters()
    {
        return this->parameters;
    }
};
