CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = monstruos punteros

all: $(TARGET)

monstruos: monstruos.o
	$(CC) $(CFLAGS) $^ -o $@

monstruos.o: monstruos.c
	$(CC) $(CFLAGS) -c $< -o $@

punteros: punteros.o
	$(CC) $(CFLAGS) $^ -o $@

punteros.o: punteros.c
	$(CC) $(CFLAGS) -c $< -o $@