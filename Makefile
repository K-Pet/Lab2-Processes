prog1: main.c
	gcc main.c -o prog1

prog2: main2.c
	gcc main2.c -o prog2

all: prog1 prog2

clean:
	rm prog1 prog2
