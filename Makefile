#	INSTRUCTIONS:
# 'mingw32-make'				build executable file 'Program.exe'
# 'mingw32-make .bin/Main.o'	build object file 'Main.o' into .bin folder
# 'mingw32-make run'			run executable file
# 'mingw32-make build-and-run'	build and run executable file
# 'mingw32-make clean'  		removes every .o and executable files

CPP			:=	g++
TARGET		:=	Program.exe
ODIR		:=	.bin
DEPS		:=	Macros.hpp	Name.hpp	Miscellaneous.hpp	Sex.hpp
OBJS		:=	Main.o		Name.o		Miscellaneous.o
OBJS_PATH	:=	$(patsubst %,$(ODIR)/%,$(OBJS))

all:	$(OBJS)
	$(CPP) -o $(ODIR)/$(TARGET) $(OBJS_PATH)

%.o:	%.cpp	$(DEPS)
	$(CPP) -c -o $(ODIR)/$@ $<
$(ODIR)/%.o:	%.cpp	$(DEPS)
	$(CPP) -c -o $@ $<

build-and-run:	all		run
run:
	$(ODIR)/$(TARGET)

clean:
	del /s /q ".\$(ODIR)\$(TARGET)" ".\$(ODIR)\*.o"
