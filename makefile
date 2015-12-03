
# VERSION 1
#all:
#	gcc main.c Linklist.h Linklist.c -o main

# version2

main:main.o Linklist.o
	gcc main.o Linklist.o -o main
main.o:main.c Linklist.h
	gcc -c main.c
Linklist.o:Linklist.c Linklist.h
	gcc -c Linklist.h Linklist.c

clean:
	rm -rf main main.o Linklist.o
