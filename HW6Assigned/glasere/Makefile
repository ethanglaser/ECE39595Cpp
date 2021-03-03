# suffix rules don't allow pre-requisites to be used and are deprecated for
# this reason.  The right way to do this is to use patterns.  The "%" pattern
# allows any file to be matched.
OBJS = HW6.o Array2D.o
CC = g++
INCLUDE = 
LIBS = 
CFLAGS = -Wall -g -std=c++11
EXECUTABLE = HW6
COMMANDLINE =

.PHONY : run
run : $(EXECUTABLE)
	./$(EXECUTABLE) $(COMMANDLINE)

cleanmake : clean HW6

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

%.o : %.cpp 
	$(CC) $(CFLAGS) -c $< $(INCLUDE) $(LIBS)

clean :
	rm $(EXECUTABLE) ${OBJS} 
