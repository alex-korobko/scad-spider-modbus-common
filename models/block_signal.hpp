#pragma once
#include <string>
class block_signal
{
private:
    unsigned int id;
    unsigned int index;
    std::string name;
    bool visible;

public:
    block_signal(unsigned int new_id, unsigned int new_index, const std::string &new_name, bool new_visible) : id(new_id), index(new_index), name(new_name), visible(new_visible) {}
    const unsigned int get_id()
    {
        return this->id;
    }

    const unsigned int get_index()
    {
        return this->index;
    }

    const std::string &get_name()
    {
        return this->name;
    }

    const bool get_visible()
    {
        return this->visible;
    }
};
