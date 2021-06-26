CC = g++
NVCC = 
PROJNAME = fastMM
MAIN = main
CPPFILES = source/memory.cpp source/utils.cpp
CUDAFILES = 
INCS = include/memory.hpp include/types.hpp include/utils.hpp
OPTIONS = -fopenmp

all: ${MAIN}

%: %.cpp ${CPPFILES} ${CUDAFILES} ${INCS} Makefile
	${CC} ${OPTIONS} -o ${PROJNAME} ${CPPFILES} ${CUDAFILES} $<


clean :
	rm ${PROJNAME}


