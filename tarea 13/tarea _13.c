#include <stdio.h>
int main() {
	

	int producto,num1,num2,seleccion;
    
    do 
	{
	    printf("\nOperaciones Aritmeticas\n");
		printf("1) Suma\n");
		printf("2) Resta\n");
		printf("3) Salir\n");
		
		printf("\nOpcion seleccionada: ");
		
		scanf("%d", &seleccion);
		
        switch(seleccion)
        {
        	case 1:       	       

		            printf("\nIngrese el primer numero: ");
		            scanf("%d",&num1);                           
		            printf("\nIngrese el numero a sumar: ");
		            scanf("%d",&num2);
		            producto=num1+num2;
		            printf("El resultado es: %d\n",producto);       	       
        	break;
        	
        	case 2:

		            printf("\nIngrese el primer numero: ");
		            scanf("%d",&num1);                          
		            printf("\nIngrese el numero a restar: ");
		            scanf("%d",&num2);
		            producto=num1-num2;
		            printf("El resultado es: %d",producto);				   	
        	break;
        
        default:
		 printf("\n\n seleccione un numero del menu");
        break;
		
    }
	
	}while (seleccion ==1 || seleccion==2);
	
	printf("El resultado es: %d",producto);
	
	
	return 0;
}


