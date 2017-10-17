#include <stdio.h> 
int main() 
{ 
    float a,b,may,men,med;
	int c; 
      printf("\nIngresar el primer numero flotante: "); 
      scanf("%f",&a); 
      printf("Ingresar el segundo numero flotante: "); 
      scanf("%f",&b); 
      printf("Ingresar el tercer numero entero: "); 
      scanf("%d",&c); 
    
      may=a; 
      if (b>may) 
         may=b;       
      if (c>may) 
         may=c;       
     
      men=a; 
      if (b<men) 
         men=b;       
      if (c<men) 
         men=c;       
             
    
      if(may>a && a>men) 
         med=a; 
      if(may>b && b>men) 
         med=b; 
      if(may>c && c>men) 
         med=c; 
         
        if(a==b && a==c && b==c)  
               printf("\n\nLos tres numeros son iguales\n");  
           else if(a==b)  
                a<c ? printf("\n\nEl primero \"%f\" y el segundo \"%f\" son iguales, y el tercero \"%d\" es el mayor\n",a,b,c) : printf("\n\nEl primero \"%f\" y el segundo \"%f\" son iguales, y el tercero \"%d\" es el menor\n",a,b,c);   
           else if(a==c)  
               a<b ? printf("\n\nEl primero \"%f\" y el tercero \"%d\" son iguales, y el segundo \"%f\" es el mayor\n",a,c,b) : printf("\n\nEl primero \"%f\" y el tercero \"%d\" son iguales, y el segundo \"%f\" es el menor\n",a,c,b);      
           else if(b==c)  
               b<a ? printf("\n\nEl segundo \"%f\" y el tercero \"%d\" son iguales, y el primero \"%f\" es el mayor\n",b,c,a) : printf("\n\nEl segundo \"%f\" y el tercero \"%d\" son iguales, y el primero \"%f\" es el menor\n",b,c,a); 
           else{  
                printf("\n\n\nEl numero mayor es: %f",may); 
                printf("\nEl numero medio es: %f",med); 
                printf("\nEl numero menor es: %f",men);   
                }  
      return 0; 
}
