#include "ini_2_models_factory.hpp"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <boost/program_options.hpp>
#include <boost/program_options/config.hpp>
namespace po = boost::program_options;
const line &init_2_models_factory::create_line(std::string line_ini_file_name, std::vector<std::string> device_types_ini_file_names, std::string message_types_ini_file_name)
{
    std::ifstream line_ini_file(line_ini_file_name);
    po::variables_map cfg_vm;
    using values = std::vector<std::string>;
    po::options_description config_file_opts;
    config_file_opts.add_options()                                                                                                                                                                                                     
        ("line", po::value<values>()->composing())
        ("station", po::value<values>()->composing())
        ("door", po::value<values>()->composing())
        ("udku", po::value<values>()->composing());
    po::store(parse_config_file(line_ini_file, config_file_opts), cfg_vm);
    std::cout << "Config file values" << std::endl;
    for (auto& [k, v] : cfg_vm) {
                std::cout << k <<"=";
                values vals_list =  v.as<values>();
                for (auto& val : vals_list) {
                    std::cout << val << " ; ";
                }
                std::cout << std::endl;
    }
    return line(1, "line1", 0xfffff, std::vector<station>());
}