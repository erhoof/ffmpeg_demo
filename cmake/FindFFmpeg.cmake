# FindFFmpeg.cmake
# This module finds the FFmpeg libraries using PkgConfig.

find_package(PkgConfig REQUIRED)

pkg_check_modules(FFMPEG REQUIRED IMPORTED_TARGET
    libavutil
    libavformat
    libavcodec
)

if(NOT FFMPEG_FOUND)
    message(FATAL_ERROR "FFmpeg libraries not found.")
endif()

message(STATUS "Found FFmpeg:")
message(STATUS "  Include directories: ${FFMPEG_INCLUDE_DIRS}")
message(STATUS "  Libraries: ${FFMPEG_LIBRARIES}")

# To help CLI / GUI to find the library
mark_as_advanced(FFMPEG_LIBRARIES FFMPEG_INCLUDE_DIRS)
