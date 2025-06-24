#include <stdio.h>
#include <stdlib.h>
#include "ArvoreAVL.h"

int main(){
    /*A primeira árvore é uma AVL, pois todos os nós possuem subárvores cuja diferença de altura não ultrapassa 1
     A segunda também é uma AVL, pois embora mais complexa, todos os nós mantêm o balanceamento, como no caso do nó 60, cujos filhos (58 e 88) têm alturas 2 e 1,
     diferença ainda válida.
     A terceira árvore é apenas um nó é uma AVL por definição.
     A terceira árvore não é uma AVL, pois o nó 14 tem a subárvore esquerda com altura 2 (13 -> 15) e a direita nula.
    */

    ArvAVL* avl;
    int res,i;
    //int N = 10, dados[10] = {50,25,10,5,7,3,30,20,8,15};
    //int N = 11, dados[11] = {50,25,10,5,5,7,3,30,20,8,15};
    int N = 10, dados[10] = {1,2,3,10,4,5,9,7,8,6};

    avl = cria_ArvAVL();

    for(i=0;i<N;i++){
        //printf("========================\n");
        //printf("Inserindo: %d\n",dados[i]);
        res = insere_ArvAVL(avl,dados[i]);
        //printf("\n\nres = %d\n",res);
        //preOrdem_ArvAVL(avl);
        //printf("\n\n");
    }
//
    printf("\nAVL tree:\n");
    emOrdem_ArvAVL(avl);
    printf("\n\n");
    RotacaoRR(avl);
//
//    int NR = 4, dadosR[4] = {7,51,3,5};
//    for(i=0;i<NR;i++){
//        printf("\nRemovendo: %d\n",dadosR[i]);
//        res = remove_ArvAVL(avl,dadosR[i]);
//        printf("\n\nres = %d\n",res);
//        preOrdem_ArvAVL(avl);
//        //printf("\n\n");
//    }
//
//    printf("\nAVL tree:\n");
//    preOrdem_ArvAVL(avl);
//    printf("\n\n");

    remove_ArvAVL(avl,6);
    printf("\nAVL tree:\n");
    emOrdem_ArvAVL(avl);
    printf("\n\n");

    remove_ArvAVL(avl,7);
    printf("\nAVL tree:\n");
    emOrdem_ArvAVL(avl);
    printf("\n\n");

    remove_ArvAVL(avl,4);
    printf("\nAVL tree:\n");
    emOrdem_ArvAVL(avl);
    printf("\n\n");

    libera_ArvAVL(avl);


    return 0;
}
