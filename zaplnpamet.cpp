#include "stdafx.h"
#include <stdlib.h>


void main()
{
	int a=200;
	int * pole= (int*) malloc(a);
	while(1){
		a*=10;
		pole= (int *) realloc(pole,a);
		//koemntár
	}
}

