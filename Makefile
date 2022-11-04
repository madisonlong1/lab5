
CXX=g++

CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -g
#CXXFLAGS= -std=c++17 -Wall 

BINARIES = testWordCount00 testWordCount01 testWordCount02

all: ${BINARIES}

tests: ${BINARIES}
	./testWordCount00
	./testWordCount01
	./testWordCount02

clean:
	/bin/rm -f *.o ${BINARIES}


testWordCount00: WordCount.o tddFuncs.o testWordCount00.o
	${CXX} $^ -o $@
testWordCount01: tddFuncs.o WordCount.o testWordCount01.o
	${CXX} $^ -o $@
testWordCount02: tddFuncs.o WordCount.o testWordCount02.o
	${CXX} $^ -o $@


