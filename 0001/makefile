CC = g++
CFLAGS = -std=c++11

SOURCES = main.cpp
DEPS = 
FILES = $(SOURCES) $(DEPS)

LINKER_FLAGS = 

OBJS = $(FILES:.cpp=.o)

LINUX_BIN = run

#Compile(output into error.txt if there is an error), link, then run
linux:
	$(CC) $(CFLAGS) -c $(FILES) 2> "errors.txt"
	$(CC) $(CFLAGS) $(OBJS) -o $(LINUX_BIN) $(LINKER_FLAGS)
