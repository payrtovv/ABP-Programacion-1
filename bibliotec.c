#include <stdio.h>
#include "lecturas.h"
#include "headers.h"


int main(){
    int respuesta=0, numerolibros=0, cantidadLibros[MAXLIBROS];
    char nombresLibros[MAXLIBROS][MAXNOMBRE], nombrelibro[MAXNOMBRE];
    float preciolibros[MAXLIBROS];
    do{
    printf("///Menu de Seleccion\\\\\\ \n");
    printf("1.- Ingresar libros. \n");
    printf("2.- Buscar Libros. \n");
    printf("3.-Salir. \n");
    respuesta=leerEnteroEntre("Seleccione una opcion: ", 1,3);
    switch (respuesta)
    {
    case 1:
        IngresarLibros(nombresLibros, cantidadLibros, preciolibros, numerolibros);
        break;
    case 2:
        buscarLibro( nombresLibros,  nombrelibro, numerolibros);
        break;
    default:
    printf("Saliendo... \n");
        break;
    }
    } while (respuesta != 3);


    return 0;
}