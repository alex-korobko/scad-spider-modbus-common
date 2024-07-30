#pragma once
#include <string>

class message_type
{
private:
    unsigned int id;
    std::string description;
    unsigned int color;

public:
    message_type(unsigned int new_id, const std::string& new_description, unsigned int color): id (new_id), description(new_description), color(color) {}
    const unsigned int get_id()
    {
        return this->id;
    }   

    const std::string& get_description()
    {
        return this->description;
    }   

    const unsigned int get_color()
    {
        return this->color;
    }   
};
