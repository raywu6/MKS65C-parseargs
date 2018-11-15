all: parse.o
	gcc parse.o
parse.o: parse.c
	gcc -c parse.c
run: a.out
	./a.out
again: parse.c
	emacs parse.c
clean: parse.o
	rm parse.o
