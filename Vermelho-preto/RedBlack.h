#ifndef REDBLACK_H_INCLUDED
#define REDBLACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct elemento{
    int valor;
}t_elemento;

typedef struct no{
    t_elemento elemento;
    enum Cor {RED, BLACK} cor;
    struct no *dir, *esq, *pai;
}t_no;

typedef struct tree{
    t_no* raiz;
    t_no* nulo;
}t_arvore;

typedef t_arvore *arvore;

t_arvore* criar_arvore();
t_no* criar_no(arvore raiz, t_elemento elemento);   //Cria um nó com seu determinado elemento
int is_vazio(arvore tree);                           //Verifica se a Arvore esta vazia
int inserir(arvore tree, t_elemento elemento);      //Insere um nó na arvore
t_no* buscar(arvore tree, t_elemento elementoB);    //Busca um elemento na arvore
int remover(arvore tree, t_elemento elemento);      //Remove um nó da arvore
void pre_ordem(arvore tree, t_no* raiz);
void in_ordem(arvore tree, t_no* raiz);
void pos_ordem(arvore tree, t_no* raiz);
void exibirGraficamente(arvore tree, int col, int desloc);
void liberarTree(arvore tree);
void inserir_fix(arvore tree, t_no* no);
void rotacionar_direita(arvore tree, t_no* no);
void rotacionar_esquerda(arvore tree, t_no* no);
void exGraficamente(arvore tree, t_no* no, int col, int lin, int desloc);
void transplante(arvore tree, t_no* no, t_no* noTroca);
int remover_fix(arvore tree, t_no* no);


typedef t_arvore *arvore;

#endif // REDBLACK_H_INCLUDED
