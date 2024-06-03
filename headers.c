
#include <stdio.h>
#include <string.h>
#include "headers.h"


void Ingresarnombre(char nombresLibros[MAXLIBROS][MAXNOMBRE], int numerolibros){
    printf("Ingrese el nombre del producto: \n");
    scanf(" %49[^\n]", nombresLibros[numerolibros]);
}
void IngresarCantidad(int cantidadLibros[MAXLIBROS], int numerolibros){
    printf("Ingrese la cantidad del producto: \n");
    scanf("%d", &cantidadLibros[numerolibros]);
}
void ingresarPrecio(float PrecioLibros[MAXLIBROS], int numerolibros){
    printf("Ingrese el precio del producto: \n");
    scanf("%f", &PrecioLibros[numerolibros]);
}

void IngresarLibros(char nombresLibros[MAXLIBROS][MAXNOMBRE], int cantidadLibros[MAXLIBROS] ,float PrecioLibros[MAXLIBROS] ,int numerolibros) {
    if (numerolibros >= MAXLIBROS) {
        printf("El inventario esta lleno...\n");
        return;
    }
    Ingresarnombre(nombresLibros, numerolibros);
    IngresarCantidad(cantidadLibros, numerolibros);
    ingresarPrecio(PrecioLibros, numerolibros);
    numerolibros++; 
    printf("---Se ha ingresado un nuevo libro---\n");
    printf("\n");
}

void buscarLibro(char nombresLibros[MAXLIBROS][MAXNOMBRE], char nombreLibro[MAXNOMBRE],int numerolibros){
    printf("Ingrese el nombre del producto que busca: \n");
    scanf(" %25[^\n]", nombreLibro);
    for (int i = 0; i < numerolibros; i++) {
        if (strcmp(nombresLibros[i], nombreLibro) == 0) {
            printf("------Producto encontrado------\n");
            return;
        }
    }
    printf("------Producto no encontrado------\n");
    printf("\n");
}
