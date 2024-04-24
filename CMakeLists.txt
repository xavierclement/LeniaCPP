cmake_minimum_required(VERSION 3.27.7)
project(Lenia)

find_package(SDL2 REQUIRED)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_LIST_DIR})

file(GLOB SOURCES "src/*.cpp")

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME} ${SDL2_LIBRARIES})
