#ifndef _ESSENTIALS_H_
#define _ESSENTIALS_H_

#include <iostream>

extern "C" { // Again, lost 1 hour for missing extern "C" .........
    #include <libavformat/avformat.h>
}

#include "spdlog/spdlog.h"
#include "spdlog/formatter.h"

#endif // _ESSENTIALS_H_