cmake_minimum_required(VERSION 3.12)
project(photosBackup)

set(CMAKE_CXX_STANDARD 14)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.45.0 COMPONENTS filesystem)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(photosBackup main.cpp backup.cpp backup.h find_files.cpp find_files.h copy_files.cpp copy_files.h)
    target_link_libraries(photosBackup ${Boost_LIBRARIES})
endif()

