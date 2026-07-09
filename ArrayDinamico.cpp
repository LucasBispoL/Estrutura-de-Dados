#include <iostream>
using namespace std;

const int erro = -1;
const int aceita = 0;

class ArrayDinamico{ 
    private:
        int* dados;
        int tam;
        int capacidade;

        void Expandir(){
            capacidade = capacidade * 2;
            int* novo = new int[capacidade];
            for(int i = 0; i < tam; i++){
                novo[i] = dados[i];
            }
            delete[] dados;
            dados = novo;
            
        }

    public:
        ArrayDinamico(int c){
            capacidade = c;
            dados = new int[c];
            tam = 0;
        }

        int Adicionar(int valor, int posicao){
            if(posicao < 0 || posicao > tam){return erro;}
            if(tam == capacidade){Expandir();}

            for (int i = tam; i > posicao; i--){
                dados[i] = dados[i-1];
            }
            dados[posicao] = valor;
            tam++;
            return aceita;
        }

        int Remover (int posicao){
            if(posicao >= tam){return erro;}
            for(int i = posicao; i < tam-1; i++){
                dados[i] = dados[i+1];
            }
            tam = tam-1;
            return aceita;
        }
        
        int Get(int posicao){
            if(posicao >= tam){return erro;}
            return dados[posicao];
        }

        int Set(int valor, int posicao){
            if(posicao >= tam) {return erro;}
            dados[posicao] = valor;
            return aceita;
        }

        int Numel(){ return tam; }

        int Size(){ return capacidade; }
};
