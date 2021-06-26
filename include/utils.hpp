#ifndef __UTILS__
#define __UTILS__

#include <string>
#include <vector>

#include "types.hpp"

typedef struct  {
    char name[20];
    bool required;
    char value[20];
} OPTION;

class Parser_CLI {
    // list of options
public:
    OPTION options[] = {
        {"DEVICE", false, "SINGLE_CPU"},
        {"m", false, "1024"},
        {"n", false, "1024"},
        {"k", false, "1024"},
        };
    
public: 
    Parser_CLI();
    bool parse(int argc, char** argv);
    std::string get_mode_optim();
    void print_option();

};

#endif