CC = g++
CFLAGS = -Wextra

Entry.o: Entry.h Entry.cpp
	$(CC) $(CFLAGS) -c $^

etest: Entry_test.cpp Entry.o
	$(CC) $(CFLAGS) $^ -o $@

Hash.o: Hash.h Hash.cpp
	make Entry.o
	$(CC) $(CFLAGS) -c $^

htest: Hash_test.cpp Hash.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm *.o
	rm *.gch
