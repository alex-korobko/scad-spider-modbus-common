#pragma once
#include <string>
#include <vector>
#include "device.hpp"
class station
{
private:
    const unsigned int id;
    const std::string name;
    const unsigned int x_coord;
    const unsigned int y_coord;
    const std::string wav_file;
    std::vector<device> devices;
public:
    station(unsigned int new_id, std::string new_name, unsigned int new_x_coord, unsigned int new_y_coord,  std::string new_wav_file, const std::vector<device> &new_devices) : id(new_id), name(new_name), x_coord(new_x_coord), y_coord(new_y_coord), wav_file(new_wav_file), devices(new_devices) {}
    const std::vector<device>& get_devices()
    {
        return this->devices;
    }
    const std::string& get_name()
    {
        return this->name;
    }
    const unsigned int get_x_coord()
    {
        return this->x_coord;
    }
    const unsigned int get_y_coord()
    {
        return this->y_coord;
    }   
    const unsigned int get_id()
    {
        return this->id;
    }   
    const std::string& get_wav_file()
    {
        return this->wav_file;
    }
};
