CC=gcc
AR=ar
FLAGS= -Wall -g
all:connections
connections:main.o libmylib.a
	$(CC) main.o libmylib.a -o connections
libmylib.a:my_mat.o
	$(AR) -rcs libmylib.a my_mat.o
main.o:main.c 
	$(CC) $(FLAGS) -c main.c
my_mat.o:my_mat.c 
	$(CC) $(FLAGS) -c my_mat.c
clean:
	rm -f *.o *.a connections
.PHONY: clean all
