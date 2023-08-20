# Makefile for compiling and running ClientApp

CXX = g++
CXXFLAGS = -std=c++11
SRC_DIR = ../src
INC_DIR = ../vendor/spdlog/include
SRC_FILES = ClientApp.cpp $(SRC_DIR)/Application.cpp $(SRC_DIR)/Log.cpp
OUT_DIR = bin
OUT = $(OUT_DIR)/ClientApp

all: $(OUT)
	./$(OUT)

$(OUT): $(SRC_FILES)
	mkdir -p $(OUT_DIR)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC_FILES) -I$(INC_DIR)

clean:
	rm -rf $(OUT_DIR)

.PHONY: all clean
