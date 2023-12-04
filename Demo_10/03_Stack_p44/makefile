all: stack_demo

stack_demo: main.o stack.o
	gcc -o stack_demo main.o stack.o

main.o: main.c stack.h
	gcc -c -o main.o main.c

stack.o: stack.c
	gcc -c -o stack.o stack.c

clean:
	del *.o
	del stack_demo.exe
