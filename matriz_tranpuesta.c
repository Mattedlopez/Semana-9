#include <stdio.h>

int main(){
    int matriz[50][50];
    int i, j;
    int rows, columns;

    printf("Ingresa en numero de filas: ");
    scanf("%d", &rows);
    printf("Ingresa en numero de columnas: ");
    scanf("%d", &columns);

    for ( i = 0; i < rows; i++){
        for ( j = 0; j < columns ; j++){
            matriz[i][j]= rand()%100;
        }
    }

    for ( i = 0; i < rows; i++){
        for ( j = 0; j < columns ; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }


    


    return 0;
}