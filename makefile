CFLAGS := -g -O0
CC     := gcc
all : array2 array3
array2 : array2.c
array3 : array3.c
clean :
	rm -fr *~ *.dSYM/ array2 array3

