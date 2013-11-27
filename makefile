CFLAGS  := -g -O0
CC      := gcc
all     : array2 array2d array3 array3d
array2  : array2.c
array2d : array2d.c
array3  : array3.c
array3d : array3d.c
clean :
	rm -fr *~ *.dSYM/ array2 array2d array3 array3d

