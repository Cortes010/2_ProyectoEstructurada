/*-----------------------------------------------------------------------------*/
/*Autor: Cortés González Esther Margarita.                                     */
/*Fecha de creación: 16 abril 2018.					       */
/*E-mail: crtsglzem@gmail.com						       */
/*Fecha de actualización: 16 abril 2018.		 		       */
/*Descripción: Programa que muestre la declaración  de constantes con #define  */
/*y const y que muestre en pantalla los valores de las constantes. Así mismo,  */
/*definir 6 macros para simular las operaciones(suma, resta, multiplicación,   */
/*división y potencia) he imprimir los valores en pantalla. También se deberán */
/*simular los ciclos for, while y do-while.   				       */
/*									       */
/*-----------------------------------------------------------------------------*/



#include<stdio.h>
/*No se reservan espacios de memoria*/
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100
#define FOR(x,y) for(x=x; x<y; x++) 

#define SUMA(x,y) x+y
#define RESTA(x,y) x-y
#define MULT(x,y) x*y
#define DIV(x,y) x/y
#define POTCUAD(x,y) x*x
#define POTCUBO(x,y) x*x*x

/*Se reservan espacios de memoria*/
const float pi=3.1416;
const float g=9.81;
const int tamanio=10;
const int min=0;
const int max=100;
const int x=0, y=10;

int main(void)
{
	/*Imprimiento, usando define*/
	printf("Usando define");
	printf("\nPI: %f \n", PI);
	printf("\nG: %f \n", PI);
	printf("\nTAMAÑO %f \n", PI);
	printf("\nMIN %f \n", PI);
	printf("\nMAX %f \n", PI);
	
	/*Imprimiento, usando define*/
	printf("Usando const");
	printf("\n Suma: %f \n", pi);
	printf("\n Resta: %f \n", PI);
	printf("\n Multiplicación: %f \n", PI);
	printf("\n División: %f \n", PI);
	printf("\n Potencia al Cuadrado: %f \n", PI);
	printf("\n Potencia al cubo: %f \n", PI);
	
	/*Operaciones*/
	printf("\nSUMA: %d \n", SUMA(3,4));
	printf("\nRESTA: %d \n", RESTA(6,4));
	printf("\nMULTIPLICACIÓN: %d \n", MULT(3,4));
	printf("\nDIVISIÓN: %d \n", DIV(4,2));
	printf("\nPOTENCIA AL CUADRADO: %d \n", POTCUAD(2,2));
	printf("\nPOTENCIA AL CUBO: %d \n", POTCUBO(2,3));
	
	
	return 0;
}
