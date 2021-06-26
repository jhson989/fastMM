#ifndef __MEMORY__
#define __MEMORY__

#include <cstdio>
#include <cstdlib>
#include <time.h>
#include "types.hpp"


/************************************
 **** CPU memory management
 ****/

template<typename T>
void init_value (T* mat, unsigned int num_element, MODE_INIT mode, T constant);

template<typename T>
T* malloc_cpu (unsigned int num_element, bool init=false, MODE_INIT mode=MODE_INIT::CONSTANT, T constant=1);

template<typename T>
inline void free_cpu (T* mat) {if (mat!=nullptr) free (mat);}



/************************************
 **** GPU memory management
 ****/


#endif