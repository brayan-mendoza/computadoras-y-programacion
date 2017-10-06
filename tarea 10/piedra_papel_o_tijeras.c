#include <stdio.h>
int main(){

	int j1=0;
	printf(" jugador 1 eliga que quiere:\n 1)piedra\n 2)papel\n 3)tijeras\n  ");
	scanf("%d", &j1);
	int j2=0;
	printf(" jugador 2 eliga que quiere:\n 1)piedra\n 2)papel\n 3)tijeras\n  ");
	scanf("%d", &j2); 
if(j1!=j2)
{	
	if(j1==1)
	{
		if(j2==2)
		{
			printf("\n j1 elige piedra, j2 elige papel\n *gana papel*\n");
		}
		else
		{
			printf("\n j1 elige piedra, j2 elige tijeras\n *gana piedra*\n");
		}
	}
	if(j1==3)
	{
		if(j2==1)
		{
			printf("\n j1 elige tijeras, j2 elige piedra\n *gana piedra*\n");
		}
		else
		{
			printf("\n j1 elige papel,  j2 elige tijeras \n *gana tijeras*\n");
		}
	}
	if(j1==3)
	{
		if(j2==1)
		{
			printf("\n j1 elige tijeras, j2 elige piedra \n  *gana piedra*\n");
		}
		else
		{
			printf("\n j1 elige tijeras, j2 elige papel \n  *gana tijeras*\n");
		}
	
	}
}	

else{
	printf("\n *Empate*");
}
}
