#include <stdio.h>

int main(){
    int option;

    printf("Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Division\n");
    printf("4. Multiply\n");

    scanf("%d", &option);

    switch(option){
        case 1:
        printf("Add operator selected\n");
        break;

        case 2:
        printf("subtract operator selected\n");
        break;

        case 3:
        printf("Divide operator selected\n");
        break;

        case 4:
        printf("Multipy operator selected\n");
        break;
    }

    printf("Finished");

    return 0;
}