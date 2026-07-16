#ifndef HEAP
#define HEAP

#include "ArrayDinamico.h"
#include "no.h"

/*
    Pai,esq,dir etc aponta pra i
    Os dois precisam se apontar para saber quem é o pai e os filhos
*/
class heap{
    private:
        int* valor; // dados
        int tam; // tamanho do heap
        int pai; // Pai do nó i
        int esq; // Filho esquerdo do nó i
        int dir; // Filho direito do nó i
        
        public:
        int Pai(int i){
            return (i+1)/2 - 1;
        }

        int Esq (int i){
            return 2*(i+1) - 1;
        }
        
        int Dir (int i){
            return 2*(i+1);
        }

        void heapify (int i){
            int e = &Esq(i);
            int d = &Dir(i);
            int maior = i;
            
            if(e <= tam && valor[e] > valor [i]){
                maior = e;
            }
            if(d <= tam && valor[d] > valor[maior]){
                maior = d;
            }
            if (maior != i){
                int aux = valor[i];
                valor[i] = valor[maior];
                valor[maior] = aux;
                heapify (maior);
            }
        }
        
        
        heap h (int a[], int n){
            tam = n;
            valor = a;
            for(int i = Pai(n-1); i<=0; i--){
                heapify(i);
            }
        }

};

#endif