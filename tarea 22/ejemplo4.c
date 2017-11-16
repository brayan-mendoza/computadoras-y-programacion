#include <stdio.h>
#include "info.h"
#define MAX 10
int main(int arg, char const *argv[]){
	info("*Ejemplo de punteros y arreglos*","16/11/2017");
int cals[MAX]={8,9,8,8,6,7,9,8,10,10};
int *ptrCals;
printf("valor del primer elemento: %d\n", cals[0]);
printf("direccion del primer elemento: %d\n", &cals[0]);
printf("direccion del primer elemento: %d\n", cals);
ptrCals= cals;
printf("valor del primer elemento: %d\n", *ptrCals);
ptrCals++;
printf("valor del primer elemento: %d\n", *ptrCals);
ptrCals++;
printf("valor del primer elemento: %d\n", *ptrCals);
return 0;
}
