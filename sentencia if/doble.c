/*sentencia if de dos alternativas: if -else*/

#include <stdio.h>

int main(){
    float nota;

    printf("Digite la nota del examen:");
    scanf("%f",&nota);

    if (nota > 10.5)
    {
        printf("El alumno esta aprobado");
    }else{
        printf("El alumno esta desaprobado");
    }
    


    return 0;
}
