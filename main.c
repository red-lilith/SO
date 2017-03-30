#include <stdio.h>
#include "util.h"

int main(int argc, char** argv[]){
	printf("Tamaño: %d\n",filesize(argv[1]));
	return 0;
}
