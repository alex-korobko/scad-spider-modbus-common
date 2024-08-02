#pragma once
#include <string>
#include "../models/line.hpp"
#include "../models/block_signal.hpp"
#include "../models/block_parameter.hpp"
#include "../models/message_type.hpp"
#include "../models/message.hpp"

class init_2_models_factory
{
private:

public:
    const line& create_line (std::string line_ini_file_name, std::vector<std::string> device_types_ini_file_names, std::string message_types_ini_file_name);
    const std::vector<message>& create_global_messages (std::string global_messages_ini_file_name, std::string global_message_types_ini_file_name);
    const std::vector<message_type>& create_message_types (std::string message_types_ini_file_name);
};