#pragma once

#include <unordered_map>
#include <mutex>

#include "base.hpp"
#include "../models/user.hpp"

class UsersHandler : public BaseHandler
{
public:
    UsersHandler(const std::string &basePath);
    void registerRoutes(App &app) override;

private:
    crow::response list(const crow::request &req);
    crow::response get(int id);
    crow::response create(const crow::request &req);
    crow::response update(int id, const crow::request &req);
    crow::response remove(int id);

    // Mock data
    std::unordered_map<int, User> users_;
    int last_id_;
    std::mutex mutex_;
};