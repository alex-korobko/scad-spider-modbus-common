#pragma once
#include <string>
class block_parameter
{
private:
    unsigned int id;
    std::string name;
    std::string value;

public:
    block_parameter(unsigned int new_id, const std::string &new_name, const std::string &new_value) : id(new_id), name(new_name), value(new_value) {}
    const unsigned int get_id()
    {
        return this->id;
    }

    const std::string &get_name()
    {
        return this->name;
    }

    const std::string &get_value()
    {
        return this->value;
    }
};
