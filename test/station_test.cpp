#include "../models/station.hpp"
#include "../models/device.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(MessageTest)
BOOST_AUTO_TEST_CASE(StationCreationTest)
{
    std::string name = "station1";
    unsigned int x = 4;
    unsigned int y = 5;
    unsigned int id = 10;
    std::string wav_file = "file.wav";
    station station_to_test(id, name, x, y, wav_file, std::vector<device>());
    BOOST_TEST_REQUIRE(station_to_test.get_name() == name);
    BOOST_TEST_REQUIRE(station_to_test.get_x_coord() == x);
    BOOST_TEST_REQUIRE(station_to_test.get_y_coord() == y);
    BOOST_TEST_REQUIRE(station_to_test.get_id() == id);
    BOOST_TEST_REQUIRE(station_to_test.get_wav_file() == wav_file);
    BOOST_TEST_REQUIRE(station_to_test.get_devices().size() == 0);
}

BOOST_AUTO_TEST_CASE(StationDeviceManipulationTest)
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
    std::vector<device> new_devices;
    new_devices.push_back(device_to_test);
    station station_to_test(id, name, x, y, wav_file, new_devices);
    std::vector<device> devices = station_to_test.get_devices();
    BOOST_TEST_REQUIRE(devices.size() == 1);
    BOOST_TEST_REQUIRE(devices[0].get_id() == device_id);
    BOOST_TEST_REQUIRE(devices[0].get_order_number() == device_order_number);
    BOOST_TEST_REQUIRE(devices[0].get_ip_address() == device_ip_address);
    BOOST_TEST_REQUIRE(devices[0].is_enabled() == device_is_enabled);
}
BOOST_AUTO_TEST_SUITE_END()
