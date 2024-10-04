CC=gcc

all: main.o lib.o
	$(CC) $^ -o out

main.o: main.c
	$(CC) -c $^
lib.o: lib.c
	$(CC) -c $^

clean: *.o out
	rm $^	
