 chcp 1251
 gcc -c --std=c99 -o main.o main.c
 gcc -c --std=c99 -o sensor.o sensor.c
 gcc -o prog sensor.o main.o
 pause