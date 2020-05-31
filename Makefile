SRC_DIR = ./sources
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj
EXECUTABLE_DIR = $(BUILD_DIR)/exe
GCC = gcc
GPP = g++
.PHONY=clean,initdir

SOURCEFILES = $(wildcard $(SRC_DIR)/*.cpp) 
SOURCEFILES += $(wildcard $(SRC_DIR)/argm/*.cxx)
SOURCEFILES += $(wildcard $(SRC_DIR)/*.c)

default:
	@make argmtest

argmtest: ds
	$(GPP) tests/main.cxx *.o -o a.t
	@./a.t

ds: 
	$(GPP) -c $(SOURCEFILES)

clean:
	@rm -rf *.o $(BUILD_DIR)
