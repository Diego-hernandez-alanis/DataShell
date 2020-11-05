lectura.exe:prototypes.o main.o
	gcc prototypes.o main.o -o lectura.exe -lm
prototypes.o: prototypes.c
	gcc -c prototypes.c
main.o: main.c
	gcc -c main.c
