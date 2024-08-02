#include "../models/line.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE( LineTests )
BOOST_AUTO_TEST_CASE(LineCreationTest)
{
    std::string name = "line1";
    unsigned int color = 0xfffff;
    unsigned int id = 1;
    line line_to_test(id, name, color, std::vector<station>());
    BOOST_TEST_REQUIRE(line_to_test.get_name() == name);
    BOOST_TEST_REQUIRE(line_to_test.get_color() == color);
    BOOST_TEST_REQUIRE(line_to_test.get_id() == id);
    BOOST_TEST_REQUIRE(line_to_test.get_stations().size() == 0);
}

BOOST_AUTO_TEST_CASE(LineStationManipulationTest)
{
    std::string name = "line1";
    unsigned int color = 0xfffff;
    unsigned int id = 1;
    std::string station_name = "station1";
    unsigned int station_x = 4;
    unsigned int station_y = 5;
    unsigned int station_id = 10; 
    std::string wav_file = "file.wav";
    station station_to_test(station_id, station_name, station_x, station_y, wav_file, std::vector<device>());
    std::vector<station> new_stations;
    new_stations.push_back(station_to_test);
    line line_to_test(id, name, color, new_stations);
    std::vector<station> stations = line_to_test.get_stations();
    BOOST_TEST_REQUIRE(stations.size() == 1);
    BOOST_TEST_REQUIRE(stations[0].get_name() == station_name);
    BOOST_TEST_REQUIRE(stations[0].get_x_coord() == station_x);
    BOOST_TEST_REQUIRE(stations[0].get_y_coord() == station_y);
    BOOST_TEST_REQUIRE(stations[0].get_id() == station_id);
    BOOST_TEST_REQUIRE(stations[0].get_wav_file() == wav_file);
}
BOOST_AUTO_TEST_SUITE_END()