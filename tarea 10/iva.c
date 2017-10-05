#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 float fsubtotal,fiva,ftotal;
 printf("calculo de compra\n subtotal:\n");
 scanf("%f",&fsubtotal);
 fiva=fsubtotal*0.16;
 ftotal=fsubtotal+fiva;
 printf("\n iva:%7.2f \n total a pagar: %7.2f \n",fiva,ftotal);
  
  system("PAUSE");    
  return 0;
}
