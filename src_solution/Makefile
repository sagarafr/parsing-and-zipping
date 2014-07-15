CC=gcc
FLAG=-Wall -Wextra -ansi
EXEC=string
SRC=string.c main.c
OBJ=$(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(FLAG) -o $(EXEC) $^

%.o:%.c
	$(CC) -c $(FLAG) -o $@ $<

clean:
	rm -rvf *.o *~ $(EXEC) \#*\#

checkmem: all
	valgrind --tool=memcheck ./$(EXEC)
