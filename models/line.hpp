#pragma once
#include <string>
#include <vector>
#include "station.hpp"
class line
{
private:
    const unsigned int id;
    const std::string name;
    const unsigned int color;
    std::vector<station> stations;

public:
    line(const unsigned int new_id, const std::string new_name, const unsigned int new_color, const std::vector<station> &new_stations) : id(new_id), name(new_name), color(new_color), stations(new_stations) {}
    const std::vector<station> &get_stations()
    {
        return this->stations;
    }
    const std::string &get_name()
    {
        return this->name;
    }
    const unsigned int get_color()
    {
        return this->color;
    }
    const unsigned int get_id()
    {
        return this->id;
    }
};
