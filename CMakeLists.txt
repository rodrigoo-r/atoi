include(FetchContent)
cmake_minimum_required(VERSION 3.12)
project(atoi C)

set(CMAKE_C_STANDARD 11)

add_library(atoi STATIC atoi.c)
if(NOT FLUENT_LIBC_RELEASE) # Manually add libraries only if not in release mode
    FetchContent_Declare(
            std_bool
            GIT_REPOSITORY https://github.com/rodrigoo-r/std_bool
            GIT_TAG        master
    )

    FetchContent_MakeAvailable(std_bool)

    target_include_directories(atoi PRIVATE ${CMAKE_BINARY_DIR}/_deps/std_bool-src)
    target_link_libraries(atoi PRIVATE std_bool)
endif ()