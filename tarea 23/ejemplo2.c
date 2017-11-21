#include <stdio.h>
struct alumnos
	{
		int edad;
		char nombre[60];
		char genero;
		char carrera[25];
		char ncuenta[10];
	};
   //aqui hubo cambio
   typedef struct alumnos ALUMNO;
	int main (int argc, char *argv[]){
		
		ALUMNO var1;
		
		printf("introduce la edad:"); 
		scanf("%d", &var1.edad);
		
		printf("Introduce el nombre:");
		fflush(stdin);
		gets(var1.nombre);
		
		printf("Edad:%d Nombre:%s",var1.edad, var1.nombre);	
	
		return 0;
	}
