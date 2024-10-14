#ifndef _VIDEOFILESESSION_H_
#define _VIDEOFILESESSION_H_

/**
 * @class VideoFileSession
 * @brief Provides a bunch of instruments for video file
 */
class VideoFileSession {
public:
    /**
     * @brief Opens video file and prepares it
     * @param filename Video file path
     * @throw 
     */
    explicit VideoFileSession(const std::string &filename);

    int dump(); // dumps
}

#endif // _VIDEOFILESESSION_H_