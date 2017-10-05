#include <stdio.h>
int main () {
	int x;
	printf("introduzca un numero del 1 al 7: ");
	scanf("%d", &x);
	switch (x) {
		case 1:
			printf("Lunes\n");
			break;
		case 2:
			printf("Martes\n");
			break;
		case 3:	
			printf("Miercoles\n");
			break;
		case 4:	
			printf("Jueves\n");
			break;
		case 5:
		    printf("Viernes\n");
		    break;

		case 6:
			printf("Sabado\n");
			break;
		case 7:
			printf("Domingo\n");		
			break;
			
	default:
	  printf ("introduce un numero del 1 al 7\n");
                   break;
    }     
    return 0;
}		

