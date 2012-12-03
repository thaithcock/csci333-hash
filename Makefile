CC = g++
CFLAGS = -Wall -Wextra -Werror

Entry.o: Entry.h Entry.cpp
	$(CC) $(CFLAGS) -c $^

etest: Entry_test.cpp Entry.o
	$(CC) $(CFLAGS) $^ -o $@

Hash.o: Hash.h Hash.cpp Entry.o
	$(CC) $(CFLAGS) -c $^

htest: Hash.o Hash_test.cpp
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm *.o
