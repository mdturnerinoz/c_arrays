CFLAGS  := -g -O0
CC      := gcc
all     : array2 array2a array3 array3a
array2  : array2.c
array2a : array2a.c
array3  : array3.c
array3a : array3a.c
clean :
	rm -fr *~ *.dSYM/ array2 array2a array3 array3a

