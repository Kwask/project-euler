#/usr!bin/env bash
FOLDER=$(date '+%d-%b-%Y')
DATE=$(date '+%B %d, %Y')

[ ! -z "$@" ] && FOLDER="$@"

function mkfile
{
    NAME="$1"
    CONTENT="$2"

    if [ -f "./$FOLDER/$NAME" ]
    then
        echo "$NAME already exists in $FOLDER/$NAME"
    else
        echo "$CONTENT" > "./$FOLDER/$NAME"
    fi   
}

mkdir "./$FOLDER"
mkdir "./$FOLDER/src"

mkfile "src/main.cpp" "/** ==========================================================================
* author:         Nick Hirzel
* email:          hirzel.2@wright.edu
* date:           $DATE

* course:         CS3100-01 Data Structures and Algorithms
* instructor:     Meilin Liu

* assignment:     $FOLDER exercise
* file:           main.cpp
* description:    
* ========================================================================== */

int main(int argc, char* argv[])
{
    return 0;
}"

mkfile "Makefile" "# makefile written by Nick Hirzel, 2019
CXX=g++
CFLAGS= -Wall -std=c++14
LIBS=

BIN=a.out
SRC=\$(wildcard ./src/*.cpp)
OBJ=\$(SRC:.cpp=.o)

all: \$(OBJ)
	@echo \"Object compilation complete\"
	@echo \"--------------------\"
	@echo \"Generating \`uname\` build\"
	@echo \"Compiler: \`\$(CXX) --version\`\"
	@echo \"--------------------\"
	@\$(CXX) \$(CFLAGS) \$(OBJ) -o \$(BIN) \$(LIBS)
	@echo \"Binary file generated\"

%.o: %.cpp
	@\$(CXX) -c \$(CFLAGS) $< -o \$@ \$(LIBS)
	@echo \"$< generated\"

clean:
	@rm -rf \$(OBJ) \$(BIN)
	@echo \"Compilation files removed\"

force:
	@touch \$(SRC)
	@echo \"Forcing compilation\"
	@echo \"--------------------\"
	@make all"

