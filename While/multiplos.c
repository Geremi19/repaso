#include <stdio.h>
//suma de n primeros numeros
int main(){
    int cont,n,suma=0; 
    printf("Cuantos numeros a sumar:");
    scanf("%i",&n);
    cont = 1;
    while (cont <=n){
        suma = suma + cont; //suma = 1,3,6, 10, 15
        cont++;
    }
    printf("\n La suma es: %i",suma);
    return 0; 
}