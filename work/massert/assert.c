#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "massert.h"

int main(int argc, char *argv[]){
	FILE *f;

	if(argc<2){
		printf("Usage : perror_use notifilename\n");
		exit(1);
	}

	my_assert ((f = fopen(argv[1],"r"))== NULL);
	exit(1);


	printf("OPen a file \"%s\".\n", argv[1]);
	fclose(f);
}
