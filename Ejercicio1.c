#include<stdio.h>

#define OPC_MILANESA 1
#define OPC_LOCRO 2
#define OPC_EMPANADAS 3
#define OPC_PASTA 4
#define OPC_PIZZA 5
const int MAX_MSJ = 30;

const int PLATO_MENU = -1;

int main(){

    char plato_1[]="Milanesa napolitana";
    char plato_2[]="Locro";
    char plato_3[]="Empanadas";
    char plato_4[]="Pasta";
    char plato_5[]="Pizza";

    char mensaje[MAX_MSJ];

    int plato_deseado = PLATO_MENU;

        printf("ingrese el plato deseado del Menu:\n[1]Milanesa napolitana - [2]Locro  - [3]Empanadas  - [4]Pasta - [5]Pizza \n");
        scanf("%i", &plato_deseado);

        switch (plato_deseado){
        case OPC_MILANESA:
            printf("Sale Orden de: %s", plato_1);
            break;
        case OPC_LOCRO:
            printf("Sale Orden de: %s", plato_2);
            break;
        case OPC_EMPANADAS:
            printf("Sale Orden de: %s", plato_3);
            break;
        case OPC_PASTA:
            printf("Sale Orden de: %s", plato_4);
            break;
        case OPC_PIZZA:
            printf("Sale Orden de: %s", plato_5);
            break;
        default:
            printf("Esta opción no esta en el menú");
        break;
    }

return 0;
}