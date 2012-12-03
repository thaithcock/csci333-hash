CC = g++
CFLAGS = -Wextra

Entry.o: Entry.cpp Entry.h
	$(CC) $(CFLAGS) -c $<

etest: Entry_test.cpp Entry.o
	$(CC) $(CFLAGS) $^ -o $@

Hash.o: Hash.cpp Hash.h
	make Entry.o
	$(CC) $(CFLAGS) -c $<

htest: Hash_test.cpp Entry.o Hash.o
	make clean
	make Entry.o
	make Hash.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o
	rm -f *.gch
