# Name of the project
PROJ_NAME = votesystem
OBJS	= MAIN.o

# All source code files
SOURCE	= MAIN.C

# Headerfiles
HEADER	= ELECTION.H

OUT	= MAIN.C
CC	 = gcc
FLAGS	 = -g -c

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

MAIN.o: MAIN.C,
	$(CC) $(FLAGS) MAIN.C, -lcunit

# Remove all the built files, invoke by `make clean`
clean:
	rm -f $(OBJS) $(OUT)
