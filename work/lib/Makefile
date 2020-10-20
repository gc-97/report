mycal : main.o sum.o substract.o mul.o divide.o
	gcc -o mycal main.o sum.o substract.o mul.o divide.o
main.o : main.c
	gcc -c main.c
sum.o : sum.c
	gcc -c sum.c
substract.o : substract.c
	gcc -c substract.c
mul.o : mul.c
	gcc -c mul.c
divide.o : divide.c
	gcc -c divide.c
clean :
	rm -f main.o sum.o substract.o mul.o divide.o
