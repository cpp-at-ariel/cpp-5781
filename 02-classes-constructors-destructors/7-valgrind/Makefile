# A generic makefile for running single-file C++ projects.
#
# AUTHOR: Erel Segal-Halevi

CXX=clang++-9
CXXFLAGS=-std=c++2a 

RM=rm -f

VALGRIND_FLAGS=
VALGRIND_FLAGS=-v --leak-check=full --show-leak-kinds=all

VALGRIND_FILTER=
VALGRIND_FILTER=2>&1 | grep "lost"

ifndef MAIN
  MAIN=./main.cpp
endif

MAINEXECUTABLE=$(subst .cpp,,$(MAIN)).exe

SOURCES=$(MAIN)

all: $(MAINEXECUTABLE)
	valgrind --tool=memcheck $(VALGRIND_FLAGS) $(MAINEXECUTABLE) $(VALGRIND_FILTER)

$(MAINEXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(MAINEXECUTABLE)

clean:
	$(RM) *.exe a.out
