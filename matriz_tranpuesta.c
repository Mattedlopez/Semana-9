#include <stdio.h>

int main(){

    //definicion de variables
    int matriz[50][50];//matriz
    int i, j;//contadores
    int rows, columns;//inputs

    //lectura de inputs
    printf("Ingresa en numero de filas: ");
    scanf("%d", &rows);
    printf("Ingresa en numero de columnas: ");
    scanf("%d", &columns);

    //dfinicion de numeros random para la mtriz
    for ( i = 0; i < rows; i++){
        for ( j = 0; j < columns ; j++){
            matriz[i][j]= rand()%100;
        }
    }

    //impresion de matriz original para comprobar
    printf("\nMATRIZ ORIGINAL:  \n\n ");
    for ( i = 0; i < rows; i++){
        for ( j = 0; j < columns ; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    //impersion de la matriz transpuesta
    printf("\nMATRIZ TRANSPUESTA:  \n\n ");
    for ( i = 0; i < rows; i++){
        for ( j = 0; j < columns ; j++){
            printf(" %d ", matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}