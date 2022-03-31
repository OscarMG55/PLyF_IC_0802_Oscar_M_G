#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 15

struct persona{

        char Nombre[TAM];
        char Apellidos[TAM*2];
        int Edad;
        char Genero;
        char Accion_1[TAM];
        char Accion_2[TAM];
        char Accion_3[TAM];
        char Accion_4[TAM];
} p;

int main(){
        //persona p;

        printf("Escribe el nombre: ");
        scanf("%s",p.Nombre);

        printf("Escribe los apellidos: ");
        scanf(" %[^\n]",&p.Apellidos);

        printf("Escribe la edad: ");
        scanf("%d",&p.Edad);

        printf("Escribe el Genero: ");
        scanf(" %c",&p.Genero);

        printf("\nAcciones: Escriba las acciones en presente");
        printf("\nAccion 1: ");
        scanf("%s",p.Accion_1);

        printf("Accion 2: ");
        scanf("%s",p.Accion_2);

        printf("Accion 3: ");
        scanf("%s",p.Accion_3);

        printf("Accion 4: ");
        scanf("%s",p.Accion_4);

        printf("\n\t********PERSONA********\n");
        printf("\n Nombre: %s %s", p.Nombre, p.Apellidos);
        if(p.Edad<=9){
        printf("\n Edad: %d año", p.Edad);
        }
	else if(p.Edad>=10){
        printf("\n Edad: %d años", p.Edad);
        }
        printf("\n Genero: %c", p.Genero);
        printf("\n");
        printf(" %s esta %s", p.Nombre, p.Accion_1);
        printf("\n %s esta %s", p.Nombre, p.Accion_2);
        printf("\n %s esta %s", p.Nombre, p.Accion_3);
        printf("\n %s esta %s", p.Nombre, p.Accion_4);

return 0;
}
