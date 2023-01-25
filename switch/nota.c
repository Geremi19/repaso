/*escribir el literal que le corresponde a la nota*/
#include <stdio.h>

int main(){
    char nota;

    printf("Digite la nota:");
    scanf("%c",&nota);

    switch (nota)
    {
    case 'A': printf("Excelente"); 
    break;
    case 'B': printf("Notable"); 
    break;
    case 'C': printf("Aprovado"); 
    break;
    case 'D': 
    case 'F': printf("Reprobado"); 
    break;
    
    default: printf("Se equivoco de nota");
        break;
    }


    return 0;
}