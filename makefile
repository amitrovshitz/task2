CC=gcc
AR=ar
FLAGS= -Wall -g
all:connections
connections:main.o my_mat.a
	$(CC) main.o my_mat.a -o connections
my_mat.a:my_mat.o
	$(AR) -rcs my_mat.a my_mat.o
main.o:main.c my_mat.h
	$(CC) $(FLAGS) -c main.c
my_mat.o:my_mat.c 
	$(CC) $(FLAGS) -c my_mat.c
clean:
	rm -f *.o *.a connections
.PHONY: clean all
