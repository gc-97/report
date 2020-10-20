#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>



void my_perror(const char *str);

int main(int argc, char *argv[]){
	FILE  *f;

	if(argc <2) {
	printf("USage : strerror_show nofilename\n");
	exit(1);
	}
	
	if((f = fopen(argv[1],"r"))== NULL){
		printf("Cannot open a file \%s\"...(error message : ",argv[1]);
	}
	printf("OPen a file \"%s\".\n",argv[1]);
	fclose(f);

}


void my_perror(const char *str){
	char errorstr[1000];
	strcpy (errorstr,str);
	strcat (errorstr,strerror(errno));

	printf("%s\n",errorstr);
}
