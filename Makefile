CC = gcc
NVCC = 
PROJNAME = fastMM
MAIN = main
CPPFILES = 
CUDAFILES = 
INCS = 
OPTIONS =

all: ${MAIN}

%: %.cpp ${CPPFILES} ${CUDAFILES} ${INCS} Makefile
	${CC} ${OPTIONS} -o ${PROJNAME} ${CUDAFILES} $<


clean :
	rm ${PROJNAME}


