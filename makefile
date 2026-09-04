NAME := ll


CFILES := $(wildcard *.c)
CFLAGS := -Ofast

all:
	gcc $(CFLAGS) $(CFILES) -o $(NAME)

clean:
	rm -f ll %.o

