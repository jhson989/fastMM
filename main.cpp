#include <cstdio>
#include <cstdlib>

#include "include/memory.hpp"
#include "include/utils.hpp"

int main(int argc, char** argv) {

    Parser_CLI parser;
    unsigned int m = 1024, n = 1024, k = 1024;

    double* A = malloc_cpu<double> (m*k, true, RANDOM);
    double* B = malloc_cpu<double> (k*n, true, RANDOM);
    double* C = malloc_cpu<double> (m*n, true, RANDOM);

    free_cpu (A);
    free_cpu (B);
    free_cpu (C);

    return 0;
}