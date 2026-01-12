#pragma once

#include <string>
#include "interface.hpp"

class BaseHandler : public IHandler
{
public:
    explicit BaseHandler();

private:
    std::string basePath_;

    // utility functions
    static crow::response bad_request(const std::string &message);
    static crow::response not_found(const std::string &message);
    static crow::response internal(const std::string &message);
};