# INSTRUCTIONS:
# 'mingw32-make'				build executable file 'Program.exe'
# 'mingw32-make build-and-run'	build and run executable file
# 'mingw32-make run'			run executable file
# 'mingw32-make .bin/Main.o'	build object file 'Main.o' into .bin folder
# 'mingw32-make clean'  		removes every .o and executable files

#====================================================#
#                  EDITABLE OPTIONS                  #
#====================================================#
TARGET			:=	Program.exe
BIN_DIR			:=	.bin
SOURCES			:=	Name.cpp	Miscellaneous.cpp	Main.cpp
HEADERS			:=	Name.hpp	Miscellaneous.hpp	Macros.hpp	Sex.hpp

# Compiler
CXX				:=	g++
# Flags
CXXFLAGS		:=	-c
LDFLAGS			:=

#====================================================#
#        DO NOT ALLOW EDITING BELOW THIS LINE        #
#====================================================#

#===< VARIABLES >=========#
EXECUTABLE		:=	$(BIN_DIR)/$(TARGET)
OBJECTS			:=	$(SOURCES:.cpp=.o)
OBJECTS_PATH	:=	$(patsubst %,$(BIN_DIR)/%,$(OBJECTS))


#===< LINKER >============#
all:			$(EXECUTABLE)
$(TARGET):		$(EXECUTABLE)
$(EXECUTABLE):	$(OBJECTS_PATH)
	$(CXX) $(LDFLAGS) -o $(EXECUTABLE) $(OBJECTS_PATH)

#===< COMPILER >==========#
%.o:			%.cpp	$(HEADERS)	| $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/$@ $<
$(BIN_DIR)/%.o:	%.cpp	$(HEADERS)	| $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $<

#===< MISCELLANEOUS >=====#
$(BIN_DIR):
	mkdir $(BIN_DIR)

build-and-run:	all		run
run:
	$(BIN_DIR)/$(TARGET)

clean:
	del /s /q ".\$(BIN_DIR)\$(TARGET)" ".\$(BIN_DIR)\*.o"
