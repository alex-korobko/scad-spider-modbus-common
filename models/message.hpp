#pragma once
#include <string>
class message
{
private:
    unsigned int id;
    std::string text;
    unsigned int type;

public:
    message(unsigned int new_id, std::string new_text, unsigned int new_type) : id(new_id), text(new_text), type(new_type) {}

    const unsigned int get_id()
    {
        return this->id;
    }
    const std::string& get_text()
    {
        return this->text;
    }   
    const unsigned int get_type()
    {
        return this->type;
    }   
};
