
.PHONY  = all clean

GCC = g++

SRCS := $(wildcard *.cpp)


BINS := $(SRCS:%.cpp=%)

LINKERFLAG = -std=c++1y


#	@echo ${LINKERFLAG}

STATEMENT := ${GCC} ${LINKERFLAG} ${SRCS} -o driver.out


all:
	@echo "Building the binary..."
	${STATEMENT}

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${BINS}
