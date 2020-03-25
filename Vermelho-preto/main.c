#include <stdio.h>
#include "RedBlack.h"

int main(){
    int tam = 0;
    int i = 0 ;
    int elem;
    char linha [ 100 ];
    char * primLinha;
    FILE *arq = fopen("instancia_cem_mil_numeros.in", "r+");

    if(arq == NULL)
    {
        printf("Arquivo nao pode ser aberto \n");
        return;
    }
        printf("Arquivo aberto com sucesso \n");
    fgets(linha, sizeof linha, arq);
    primLinha = strtok(linha, "");
    tam = atoi(primLinha);
    int A[tam];
    while(!feof(arq))
    {
        fscanf(arq, "%d", &A[i]);
        i++;
    }

    arvore t = criar_arvore();

    for(int i = 0; i < tam ; i++ ){
        t_elemento no = {A[i]};
        inserir(t, no);
    }
    fclose(arq);

    for(int i = 0; i <10 ; i++){
        printf("Digite um numero para remover na arvore: \n ");
        scanf("%i", &elem);
        t_no *aux;
        int cor;
        if(aux = buscar(t, (t_elemento){elem})){
            printf("Achou chave %i \n", (t_elemento){elem} );
            cor = aux->cor;
            if(cor == BLACK){
                printf("No preto \n");
            } else{
                printf("No vermelho \n");
            }
            printf("Removeu chave %i\n", (t_elemento){elem});
            remover(t,(t_elemento){elem} );
        } else{
            printf("Nao Achou chave \n");
        }
    }



    liberarTree(t);
    getchar();
}
