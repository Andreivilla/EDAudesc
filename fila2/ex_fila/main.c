#include"util.h"
/*reame
funções do menu  
1- adiciona valores nas filas individualmente
2- visualizar os valores nas filas
3- executa a passagem de arguivos de uma vila para outra confomre a prioridade
*/
int main(int agrc, char *argv[]){
    Fila *fila1= criar_fila();
    Fila *fila2 = criar_fila();
    Fila *fila3 = criar_fila();
    int Nlista = 0;

    while(1){
        switch(menu()){
            case 1:
                printf("Qual a prioridade adicionar(1,2,3): ");
                scanf("%d", &Nlista);
                switch(Nlista){
                case 1:
                    add_no(fila1);
                break;
                case 2:
                    add_no(fila2);
                break;
                case 3:
                    add_no(fila3);
                break;
                default:
                    printf("--- Opcao invalida ---\n");
                    break;
                }
                break;
            case 2:
                printf("\n|----------------FILA 1-----------------|\n");
                print_filas(fila1);
                printf("\n|----------------FILA 2-----------------|\n");
                print_filas(fila2);
                printf("\n|----------------FILA 3-----------------|\n");
                print_filas(fila3);
                break;
            case 3:
                executar(fila1, fila2, fila3);
                break;
            case 0:
                return 0;
                break;            
            default:
                break;
        }
    }
    return 0;
}
