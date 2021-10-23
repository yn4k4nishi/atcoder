CC      = g++
CFLAGS  = -Wall -I/usr/local/include
LDFLAGS = -L/usr/loca/lib
OBJS    = main.cpp
PROGRAM = main

all: $(PROGRAM) exec

$(PROGRAM): $(OBJS)
	mkdir build -p
	$(CC) $(OBJS) $(LDFLAGS) -o build/$(PROGRAM)

exec : $(OBJS)
	cat input.txt | ./build/$(PROGRAM)

clean : $(OBJS)
	rm -rf build