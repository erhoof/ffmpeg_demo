#include "essentials.h"
#include "errors.h"

int main(int argc, char *argv[]) {
    spdlog::set_pattern("[%m/%d %H:%M:%S] %v");
    spdlog::info("ffmpeg_demo is launching");

    spdlog::info("Found FFMPEG, version: {}", av_version_info());

    int rc = 0;
    return rc ? EXIT_FAILURE : EXIT_SUCCESS;
}
