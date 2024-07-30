#include "../models/station.hpp"
#include "../models/device.hpp"
#include <gtest/gtest.h>

TEST(station_test, StationCreationTest)
{
    std::string name = "station1";
    unsigned int x = 4;
    unsigned int y = 5;
    unsigned int id = 10;
    std::string wav_file = "file.wav";
    station station_to_test(id, name, x, y, wav_file, std::vector<device>());
    EXPECT_EQ(station_to_test.get_name(), name);
    EXPECT_EQ(station_to_test.get_x_coord(), x);
    EXPECT_EQ(station_to_test.get_y_coord(), y);
    EXPECT_EQ(station_to_test.get_id(), id);
    EXPECT_EQ(station_to_test.get_wav_file(), wav_file);
    EXPECT_EQ(station_to_test.get_devices().size(), 0);
}

TEST(station_test, StationDeviceManipulationTest)
{
    std::string name = "station1";
    unsigned int x = 4;
    unsigned int y = 5;
    unsigned int id = 10;
    std::string wav_file = "file.wav";
    unsigned int device_id = 11;
    unsigned int device_order_number = 3;
    std::string device_ip_address = "172.168.15.5";
    bool device_is_enabled = true;
    device device_to_test(device_id, device_order_number, device_ip_address, device_is_enabled, std::vector<device_block>(), std::vector<message>());
    std::vector<device> new_devices = {device_to_test};
    station station_to_test(id, name, x, y, wav_file, new_devices);
    std::vector<device> devices = station_to_test.get_devices();
    EXPECT_EQ(devices.size(), 1);
    EXPECT_EQ(devices[0].get_id(), device_id);
    EXPECT_EQ(devices[0].get_order_number(), device_order_number);
    EXPECT_EQ(devices[0].get_ip_address(), device_ip_address);
    EXPECT_EQ(devices[0].is_enabled(), device_is_enabled);
}