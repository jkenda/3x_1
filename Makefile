CC=gcc
CARGS=-O3

all: main

main: main.c
	$(CC) $(CARGS) -o main main.c

run: main
	./main | tee freq.csv
