all: find_max

find_max: main.o func.o
	gcc -o prog main.o func.o

main.o: main.c func.h
	gcc -c -o main.o main.c

func.o: func.c
	gcc -c -o func.o func.c

clean:
	del *.o
	del find_max.exe
