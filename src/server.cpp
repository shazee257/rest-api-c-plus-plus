#include "server.hpp"

Server::Server(const ServerConfig &config) : config_(config)
{
    setup();
}