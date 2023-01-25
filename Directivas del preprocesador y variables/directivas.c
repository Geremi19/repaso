//Directivas del proprocesador y variables
#include <stdio.h>  //imprimir cosas por pantalla

#define PI 3.1416  //asignar valor a una variable  'macro'

int y = 5;//variable global se puede utilizar fuera de la funcion

int main(){
    int x =10; //se utiliza dentro de la funcion asignada ('variable local')

    int suma = 0;
    suma = PI + x;

    printf("La suma es: %i",suma);

    return 0; 
}
