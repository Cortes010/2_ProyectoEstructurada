/*-----------------------------------------------------------------------------*/
/*Autor: Cortés González Esther Margarita.                                     */
/*Fecha de creación: 16 abril 2018.					       */
/*E-mail: crtsglzem@gmail.com						       */
/*Fecha de actualización: 16 abril 2018.		 		       */
/*Descripción: Ordenar un arreglo de números enteros de forma ascendente.      */
/*									       */
/*-----------------------------------------------------------------------------*/



/*Directivas de preprocesador*/
#include<stdio.h>



/*Función principal*/
int main()
{

   /*Declaración de variables*/
   int a[]={3,5,2,1,7,0,5,9,5}, aux;
   
   /*ordenación con método burbuja*/
   for(int i=0; i<9; i++)/* i inicializa en 0, compara, entra al for y aumenta*/
   {
      for(int j=0; j<9; j++)/* i inicializa en 0, compara, entra al for y aumenta*/
      {
         if(a[i]<a[j])/*Evalúa la condición, sí a[i] es menor a a[j] entra al if*/
         {
            
            aux=a[i];/*A la variable aux se le asigna el elemento a[i]*/
            a[i]=a[j];/*A a[i] se le asigna el elemento a[j]*/
            a[j]=aux;/*A a[j] se le asigna el elemento aux*/
          } 
       }
   }
   
   /*imprime en orden ascedente*/
   for(int i=0; i<9; i++)/* i inicializa en 0, compara, entra al for y aumenta*/
   {
      printf(" %d ",a[i]);/*Imprime los elementos del arreglo*/
   }
   printf("\n");/*Imprime salto de línea*/

   return 0;/*Regresa 0 para indicar que el programa finaliza sin ningún error.*/

}
