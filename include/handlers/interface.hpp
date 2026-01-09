// pragma once to ensure the header is included only once
#pragma once

#include <crow.h>

using App = crow::SimpleApp;

class IHandler
{
public:
    virtual void registerRoutes(App &app) = 0;
};