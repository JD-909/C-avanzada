CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = monstruos punteros punteros2 strings

all: $(TARGET)

monstruos: monstruos.o
	$(CC) $(CFLAGS) $^ -o $@

monstruos.o: monstruos.c
	$(CC) $(CFLAGS) -c $< -o $@

punteros: punteros.o
	$(CC) $(CFLAGS) $^ -o $@

punteros.o: punteros.c
	$(CC) $(CFLAGS) -c $< -o $@

punteros2: punteros2.o
	$(CC) $(CFLAGS) $^ -o $@

punteros2.o: punteros2.c
	$(CC) $(CFLAGS) -c $< -o $@

strings: strings.o
	$(CC) $(CFLAGS) $^ -o $@

strings.o: strings.c
	$(CC) $(CFLAGS) -c $< -o $@