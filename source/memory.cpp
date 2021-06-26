#include "../include/memory.hpp"


template<typename T>
void init_value (T* mat, unsigned int num_element, MODE_INIT mode, T constant) {

    switch (mode)
    {
    case MODE_INIT::RANDOM:
        srand(time(NULL));
        for (unsigned int i=0; i<num_element; i++)
            mat[i] = ((T)(rand()%10000))/100;
        break;
    
    case MODE_INIT::CONSTANT:
        for (unsigned int i=0; i<num_element; i++)
            mat[i] = constant;
        break;
    }

}


template<typename T>
T* malloc_cpu (unsigned int num_element, bool init, MODE_INIT mode, T constant) {
    T* mat = (T*) malloc (sizeof(T) * num_element);

    if (init == true)
        init_value<T> (mat, num_element, mode, constant);

    return mat;
}


template void init_value<int> (int* mat, unsigned int num_element, MODE_INIT mode, int constant);
template void init_value<float> (float* mat, unsigned int num_element, MODE_INIT mode, float constant);
template void init_value<double> (double* mat, unsigned int num_element, MODE_INIT mode, double constant);

template int* malloc_cpu<int> (unsigned int num_element, bool init, MODE_INIT mode, int constantt);
template float* malloc_cpu<float> (unsigned int num_element, bool init, MODE_INIT mode, float constant);
template double* malloc_cpu<double> (unsigned int num_element, bool init, MODE_INIT mode, double constant);

