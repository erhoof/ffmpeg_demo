#include "essentials.h"

#include "customexceptions.h"

#define LOG_TAG "[VideoExceptiom] "

VideoException::VideoException(const std::string &filename, const std::string &msg) {
    spdlog::error(LOG_TAG, "Exception occured, file: {}, message: {}", filename, msg);
    whatMessage = std::format(LOG_TAG "File: '{}', Message: '{}', file is {}present",
        filename, msg, std::filesystem::exists(filename) ? "" : "not ");
}

const char *VideoException::what() const noexcept {
    return whatMessage.c_str();
}
