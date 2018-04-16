/*-----------------------------------------------------------------------------*/
/*Autor: Cortés González Esther Margarita.                                     */
/*Fecha de creación: 13 abril 2018.					       */
/*E-mail: crtsglzem@gmail.com						       */
/*Fecha de actualización: 13 abril 2018.		 		       */
/*Descripción: Imprimir las veces se repiten los números del 0-9 de un arreglo */
/*									       */
/*-----------------------------------------------------------------------------*/
#include<stdio.h>

int main()
{
   
   int a[]={2,3,2,6,8,6,0,4,2}, cont=0;/*Se le asigna los valores*/
   
   /*for(int i=0; i<9; i++)
   {
      printf("Introduce un número");
      scanf("%d",&a[i]);
   }*/
   
   for(int i=0; i<=9; i++)/*Compara el número 0 hasta el 9*/
   {
      for(int j=0; j<9; j++)/*Recorre el arreglo buscando semejanzas*/
      {
         if(i==a[j])/*Compara si el valor de i es igual al elemento de a[j]*/
         {
            cont++;/*Aumenta contador*/
         } 
       }
       printf("El número %d se repite %d veces\n",i, cont);/*Imprime cuántas veces se repite un número*/
       cont=0;/*Contado vuelve a tomar el valor de 0 para no seguir incrementando en el otro ciclo*/
   }
   
   return 0;/*Termina con éxito el programa*/
   
}

