/*-----------------------------------------------------------------------------*/
/*Autor: Cortés González Esther Margarita.                                     */
/*Fecha de creación: 16 abril 2018.					       */
/*E-mail: crtsglzem@gmail.com						       */
/*Fecha de actualización: 16 abril 2018.		 		       */
/*Descripción: Elabore un programa que imprima el menor a partir de un arreglo */
/*unidimensional de enteros.             				       */
/*									       */
/*-----------------------------------------------------------------------------*/



//Directivas del preprocesado
#include<stdio.h>
#define N 5 //Declaramos número constante



//Definición de la función principal
int main()
{
   //Declaración de variables locales
   int n[N], men;
   
   for(int i=0; i<N; i++)//Para recorrer el arreglo, i inicia en 0, compara si es menor a N y si sí entra al for, evalúa, e incrementa.
   {
      printf("Introduce número %d: ",i+1);//Imprime mensaje, indicando al usuario que introduzca valor
      scanf("%d",&n[i]);//Lee el valor introducido y enseguida i incrementa y vuelve a repetir el ciclo si cumple con la condición
   }
   
   
   men=n[0];// a men(número menor) se le asigna el primer el elemento del arreglo
  
   for(int i=1; i<N; i++)//Para recorrer el arreglo, i inicia en 0, compara si es menor a N y si sí entra al for, evalúa, e incrementa.
   {
       if(men>n[i]) //En caso de que cumpla con la condición entra al if
         men=n[i];//A men se le asigna el elemento que se encuentra en la posición i
   }
   
   printf("Número menor: %d\n", men);//Imprime el número menor
   
   //Regresa 0 para indicar que el programa finaliza sin ningún error.
   return 0;
}
