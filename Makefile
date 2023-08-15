# INSTRUCTIONS:
# 'mingw32-make'				build executable file 'Program.exe'
# 'mingw32-make build-and-run'	build and run executable file
# 'mingw32-make run'			run executable file
# 'mingw32-make .bin/Main.o'	build object file 'Main.o' into .bin folder
# 'mingw32-make rebuild'		clean and subsequently compile all
# 'mingw32-make clean'  		removes every .o and executable files

#====================================================#
#                  EDITABLE OPTIONS                  #
#====================================================#
HEADERS			:=	Name.hpp	Miscellaneous.hpp	Macros.hpp	Sex.hpp
SOURCES			:=	Name.cpp	Miscellaneous.cpp	Main.cpp
TARGET			:=	Program.exe
BIN_DIR			:=	.bin

# Compiler
CXX				:=	g++
# Flags
CXXFLAGS		:=	-c -Wall
LDFLAGS			:=

#====================================================#
#        DO NOT ALLOW EDITING BELOW THIS LINE        #
#====================================================#
.PHONY: build build-and-run rebuild run clean 

#===< VARIABLES >=========#
EXECUTABLE		:=	$(BIN_DIR)/$(TARGET)
OBJECTS			:=	$(SOURCES:%.cpp=%.o)					# Replace *.cpp into *.o file
OBJECTS_PATH	:=	$(patsubst %,$(BIN_DIR)/%,$(OBJECTS))	# Appprefix .bin to *.o file into .bin/*.o

#===< LINKER >============#
build:			$(EXECUTABLE)
$(EXECUTABLE):	$(OBJECTS_PATH)
	@$(CXX) $(LDFLAGS) -o $(EXECUTABLE) $(OBJECTS_PATH)
	@echo Linked file - $(subst /,\,$(CURDIR)/$(EXECUTABLE))
	@echo Build successful!!!

#===< COMPILER >==========#
$(BIN_DIR)/%.o:	%.cpp	$(HEADERS)	| $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) -o $@ $<
	@echo Compiled file - $(subst /,\,$(CURDIR)/$@)
%.o:			%.cpp	$(HEADERS)	| $(BIN_DIR)
	@$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/$@ $<
	@echo Compiled file - $(subst /,\,$(CURDIR)/$(BIN_DIR)/$@)

#===< MISCELLANEOUS >=====#
$(BIN_DIR):
	@mkdir $(BIN_DIR)
	@echo Created directory - $(subst /,\,$(CURDIR)/$(BIN_DIR))

rebuild:		clean	build
build-and-run:	build	run
run:
	@$(EXECUTABLE)

clean:
	@del /s							\
		$(subst /,\,$(EXECUTABLE))	\
		$(subst /,\,$(OBJECTS_PATH))
	@echo Clean done

remove-dir:
	@rmdir /s /q $(BIN_DIR)
	@echo Removed directory - $(subst /,\,$(CURDIR)/$(BIN_DIR))