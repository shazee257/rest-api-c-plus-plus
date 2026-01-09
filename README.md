# C++ REST API

This project is a REST API implementation using C++ and the Crow web framework. It demonstrates a structured approach to building web services in C++ with separate handlers for different routes.

## Tech Stack

*   **Language**: C++
*   **Web Framework**: [Crow](https://crowcpp.org/)
*   **Build System**: CMake

## Project Structure

*   `src/`: Contains the main entry point (`main.cpp`).
*   `include/handlers/`: Contains the route handler definitions.
    *   `interface.hpp`: Defines the `IHandler` interface for route registration.
    *   `base.hpp`: Provides a base class with utility methods (e.g., standard responses).
    *   `users.hpp`: Implementation of specific route handlers (e.g., for user management).

## Prerequisites

*   C++ Compiler (GCC/Clang/MSVC) supporting C++11 or later.
*   CMake (version 3.28 or later).
*   Crow (must be installed or available to CMake).

## Build Instructions

1.  Create a build directory:
    ```bash
    mkdir build
    cd build
    ```

2.  Configure the project with CMake:
    ```bash
    cmake ..
    ```

3.  Build the executable:
    ```bash
    make
    ```

## Running the Application

After building, run the generated executable:

```bash
./rest-api
```
