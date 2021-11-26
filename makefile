CC = gcc
FLAGS = -Wall -g
AR= ar


#make all
all: connections

connections: main.o my_mat.o 
	$(CC) main.o my_mat.o -o connections 


main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c


 #make clean
.PHONY: clean all

 clean: 
	rm -f connections *.o