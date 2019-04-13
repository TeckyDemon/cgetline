CC=gcc
CFLAGS=-std=c99 -O3 -s -pipe -Werror -Wall -Wextra -Wundef -Wshadow -Wconversion -Wunreachable-code -Wfloat-equal -Winit-self -Wformat=2

all: getline.a
%.o: %.c
	$(CC) -c $? -o $@ $(CFLAGS)
%.a: %.o
	ar rcs lib$@ $?
debug: CFLAGS+=-fsanitize=address
debug: all
