#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Heapsort.h"

int main()
{
    int tam = 0;
    int i = 0 ;
    char linha [ 100 ];
    char * primLinha;
    char str[80];
    FILE *arq;
    printf("Digite o caminho do arquivo: \n");
    gets(str);
    arq = fopen(str,"r+");
    if(arq == NULL)
    {
        printf("Arquivo nao pode ser aberto \n");
        return;
    }
    fgets(linha, sizeof linha, arq);
    primLinha = strtok(linha, "");
    tam = atoi(primLinha);
    int A[tam];
    while(!feof(arq))
    {
        fscanf(arq, "%d", &A[i]);
        i++;
    }
    fclose(arq);
    Heapsort(A, tam);
    salvarArquivo(A, tam);

    return 0;
}

void salvarArquivo(int A[], int tam)
{
    FILE *pArquivo;
    pArquivo = fopen("heapsort.txt","w+");
    if (pArquivo)
    {
        for(int i = 0; i < tam; i++ )
        {
            fprintf(pArquivo,"%d\n", A[i]);
        }
    }
    fclose(pArquivo);
    printf("Foi gerado um arquivo com as instancias ordenadas. \n");
}
