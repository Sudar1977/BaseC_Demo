 chcp 1251
 gcc -c --std=c99 -o main.o main.c
 gcc -c --std=c99 -o stack.o stack.c
 gcc -o prog main.o stack.o
 pause