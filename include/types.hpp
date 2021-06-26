#ifndef __TYPES__
#define __TYPES__

#include <string>

enum MODE_INIT {
    RANDOM=0,
    CONSTANT
};

enum MODE_DEVICE {
    SINGLE_CPU,
    MULTI_CPU,
    GPU
};

const std::string MODE_OPTIM_S[] = {
    "SINGLE_CPU",
    "MULTI_CPU",
    "GPU"
};


#endif