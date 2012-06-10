CC?=gcc

all:
	$(CC) -O0 -g3 --sysroot=../ -nostdlib -nostdinc -nodefaultlibs -I../include -c *.c
	$(CC) -nostdlib -nostdinc -nodefaultlibs start.s *.o

clean:
	rm a.out
	rm *.o

