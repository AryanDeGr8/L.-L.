NAME := ll


CFILES := $(wildcard *.c)
CFLAGS := -o

all:
	gcc $(CFILES) $(CFLAGS) $(NAME)

clean:
	rm -f ll %.o

