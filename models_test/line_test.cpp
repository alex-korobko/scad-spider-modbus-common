#include "../models/line.hpp"
#include <gtest/gtest.h>

TEST(line_test, LineCreationTest)
{
    std::string name = "line1";
    unsigned int color = 0xfffff;
    unsigned int id = 1;
    line line_to_test(id, name, color, std::vector<station>());
    EXPECT_EQ(line_to_test.get_name(), name);
    EXPECT_EQ(line_to_test.get_color(), color);
    EXPECT_EQ(line_to_test.get_id(), id);
    EXPECT_EQ(line_to_test.get_stations().size(), 0);
}

TEST(line_test, LineStationManipulationTest)
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
    std::vector<station> new_stations = {station_to_test};
    line line_to_test(id, name, color, new_stations);
    std::vector<station> stations = line_to_test.get_stations();
    EXPECT_EQ(stations.size(), 1);
    EXPECT_EQ(stations[0].get_name(), station_name);
    EXPECT_EQ(stations[0].get_x_coord(), station_x);
    EXPECT_EQ(stations[0].get_y_coord(), station_y);
    EXPECT_EQ(stations[0].get_id(), station_id);
    EXPECT_EQ(stations[0].get_wav_file(), wav_file);
}