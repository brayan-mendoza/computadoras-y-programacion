#include <stdio.h>
#include "info.h"
int main(int arg, char const *argv[]){
	info("** Ejemplo de punteros **","16/11/2017");

int a;
a =  10;
int *puntero;
 puntero=&a;
printf("%d\n", *puntero);
return 0;
}
