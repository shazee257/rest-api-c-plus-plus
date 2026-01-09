cmake_minimum_required(VERSION 3.28)
project(rest-api)

# find the libs
find_package(Crow REQUIRED)

# link source files
add_executable(rest-api src/main.cpp)

# link the libraries to the executable
target_link_libraries(rest-api PUBLIC Crow::Crow)

# link header files (include dir)
target_include_directories(rest-api PUBLIC ${PROJECT_SOURCE_DIR}/include)