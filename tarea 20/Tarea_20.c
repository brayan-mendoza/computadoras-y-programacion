#include <stdio.h>
#include "cuadrado.h"
#include "iva.h"
int main() {
	int a,b,seleccion;
	float subtotal;
    do 
	{
	    printf("\n\n elija que desea hacer\n");
		printf("1) Un cuadrado\n");
		printf("2) Sacar el iva:\n");
		printf("3) Salir\n");
		
		printf("\nOpcion seleccionada: ");
		
		scanf("%d", &seleccion);
		
        switch(seleccion)
        {
        	case 1:       	       
					printf("dame la altura:\n");
					scanf("%d", &a);
					printf("dame la base\n");
					scanf("%d", &b);
					figura(a,b);     	       
        	break;
        	
        	case 2:
					printf("calculo de compra\n subtotal:\n");
 					scanf("%f",&subtotal);
 					printf("\n iva:%.2f \n total a pagar: %.2f \n",IVA(subtotal),TOTAL(subtotal,IVA(subtotal)));
       	           	break;
		                    
        default:
		 
        break;
		
    }
	
	}	
	while (seleccion ==1 || seleccion==2);
	printf("\n **USTED A SALIDO DEL MENU**:\n" );
		
	return 0;
}
