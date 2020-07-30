cmake_minimum_required(VERSION 3.15)
project(ds_messenger_sdk)
set(CMAKE_CXX_STANDARD 11)

add_library(ds_messenger_sdk SHARED sdk/util/logger.cpp sdk/util/logger.h sdk/export/ds_messenger.h sdk/export/ds_messenger.cpp sdk/core/messenger.h sdk/core/messenger.cpp)

add_executable(runable runable/main.cpp)

target_link_libraries(runable ds_messenger_sdk)

