cmake_minimum_required(VERSION 3.16.0)
project(ffmpeg_demo VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

# Submodule dependencies
add_subdirectory(3rdparty/spdlog)

# As some distros (Fedora 41 in my case) does not provide all necessary Find*.cmake files
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

find_package(FFmpeg REQUIRED)

set(SOURCES
    src/customexceptions.cpp
    src/main.cpp
)
add_executable(${PROJECT_NAME} ${SOURCES})

# There we can use "target_include_directories(${PROJECT_NAME} PUBLIC" or "include_directories"
include_directories(
    inc
    ${FFMPEG_INCLUDE_DIRS}
)
target_precompile_headers(${PROJECT_NAME} PUBLIC inc/essentials.h)

# As precompile headers does not work with link_libraries
target_link_libraries(${PROJECT_NAME} PRIVATE
    ${FFMPEG_LIBRARIES}
    spdlog
)
