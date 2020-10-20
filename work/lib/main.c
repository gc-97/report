#include "sum.h"
#include "divide.h"
#include "mul.h"
#include "substract.h"
#include<stdio.h>

int main(int argc, char **argv){

	int x=30;
	int y=15;

	printf("%d + %d = %d \n", x, y, sum(x,y));
	printf("%d - %d = %d \n", x, y, substract(x,y));
	printf("%d * %d = %d \n",x, y, mul(x,y));
	printf("%d / %d = %d \n", x, y, divide(x,y));
}
