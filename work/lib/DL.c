#include <stdio.h>
#include <dlfcn.h>


int main(int argc, char **argv){
	void *handle;
	int (*sum)(int,int),(*substract)(int,int),
	(*mul)(int,int),(*divide)(int,int);

	char *error;
	int x = 30;
	int y = 15;

	handle = dlopen("./libmycal.so",RTLD_LAZY);

	if(!handle){
	fputs(dlerror(),stderr);
	}

	sum = dlsym(handle,"sum");
	if((error = dlerror()) != NULL) {
		fprintf(stderr,"%s",error);
		_Exit;
	}


	substract = dlsym(handle,"substract");
	if((error = dlerror()) != NULL) {
                fprintf(stderr,"%s",error);
		_Exit;
        }

        mul = dlsym(handle,"mul");
        if((error = dlerror()) != NULL) {
                fprintf(stderr,"%s",error);
                _Exit;
        }

        divide = dlsym(handle,"divide");
        if((error = dlerror()) != NULL) {
                fprintf(stderr,"%s",error);
                _Exit;
       }
	printf("%d + %d = %d \n", x, y, sum(x,y));
        printf("%d - %d = %d \n", x, y, substract(x,y));
        printf("%d * %d = %d \n",x, y, mul(x,y));
        printf("%d / %d = %d \n", x, y, divide(x,y));
	dlclose(handle);

}
