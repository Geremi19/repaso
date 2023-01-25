/*hacer un programa que borre la pantalla al pulsar 1*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    char tecla;

    printf("Programa de borrador de pantalla!!!!!!!!!");
    printf("\n----------------------");
    printf("\n----------------------");
    printf("\nDigitie el numero 1:");
    scanf("%c",&tecla);

    if(tecla=='1'){
        system("cls");
        printf("Ha funcionado, el limpiado de pantalla");
    }else{
        fflush(stdin);
        printf("No a funcionando el limpiado de pantalla");
        printf("Por favor, digite el numero 1:");
        scanf("%c",&tecla);
        if (tecla =='1'){
            system("cls");
        }else
        {
            printf("No funciono");
        }
        
        
    }   

    return 0;


}
