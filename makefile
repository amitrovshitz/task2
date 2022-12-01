all:connections
connections:main.o my_mat.o
	gcc main.o my_mat.o  -o connections
main.o:main.c my_mat.h
	gcc -c main.c
my_mat.o:my_mat.c 
	gcc -c my_mat.c
clean:
	rm -f *.o
.PHONY: clean all
