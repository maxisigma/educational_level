#include <stdio.h>
int main()
{
    int edad;
    char respuesta[150];
    printf("Introduzca la edad: ");
    scanf("%d", &edad);
    if(edad >= 1 && edad <= 4){
        printf("La edad corresponde al nivel educativo pre escolar");
    } else if(edad == 5){
        printf("Nivel: Jardin de infantes");
    } else if(edad >= 6 && edad <= 11){
        printf("Nivel: Primaria");
    } else if(edad >= 12 && edad <= 17){
        printf("Nivel: Secundario");
    } else if(edad > 17){
        printf("Nivel: Universitario");
    } else{
        printf("La edad introducida no es valida");
    }
    return 0;
}
