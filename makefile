devops.exe : main.o fib.o reverse.o
	gcc -o devops.exe main.o fib.o reverse.o
main.o : main.c
	gcc -c main.c
fib.o: fib.c
	gcc -c fib.c
reverse.o : reverse.c
	gcc -c reverse.c
