SRC := array2.c array3.c
OBJ := array2   array3
CFLAGS := -g -O0
all : $(OBJ)
$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) $< -o $@
clean :
	rm -fr *~ *.dSYM/ $(OBJ)

