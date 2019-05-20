CC=gcc
CFLAGS=-std=c99 -O3 -s -pipe -Werror -Wall -Wextra -Wundef -Wshadow -Wconversion -Wunreachable-code -Wfloat-equal -Winit-self -Wformat=2

all: getline.o
%.o: %.c
	$(CC) -c $? -o $@ $(CFLAGS)