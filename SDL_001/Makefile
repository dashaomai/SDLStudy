all : main.o
	cc -o HelloSDL *.o -L/usr/local/lib -lSDL2

main.o :
	cc -c main.c -I/usr/local/include

.PHONY : clean
clean :
	rm -rf *.o HelloSDL
