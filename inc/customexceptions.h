#ifndef _CUSTOMEXCEPTIONS_H_
#define _CUSTOMEXCEPTIONS_H_

/**
 * @file customexceptions.h
 * @brief This file contains exceptions, which are used inside this project
 *
 * @note This class is part of the ffmpeg_demo project
 */

/**
 * @class VideoException
 * @brief Defines custom exception, which is used inside this project and
 *  defines some video errors
*/
class VideoException : public std::exception {
public:
    /**
     * @brief Constructor, which is used by std::exception
     * @param filename Contains filename of file exception reffers to
     * @param msg Exception message
     *
     * @note std::exception requirement
     */
    VideoException(const std::string &filename, const std::string &msg);

    /**
     * @brief Returns exception message with filename
     * @return Pointer to string with message, which lives until VideoException object lives
     *
     * @note std::exception requirement
     */
    virtual const char *what() const noexcept override;

private:
    std::string whatMessage;

    VideoException() = delete;
    VideoException &operator=(const VideoException &) = delete;
};

#endif
