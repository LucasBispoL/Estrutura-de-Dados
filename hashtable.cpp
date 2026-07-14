#include <iostream>
#include "SinglyLinkedList.cpp"
using namespace std;

class hashTable{
    private:
        SinglyLinkedList* dados;
        int tam;
        int numElem;
        bool limite;

        int hash (int elem){
            if (tam <= 0) {
                return 0;
            }

            int f = elem * 2;
            return f % tam;
        }

    public:
        hashTable (){
            dados = nullptr;
            tam = 0;
        };

        hashTable (int tam){
            this->tam = tam;
            dados = new SinglyLinkedList [tam];
            for(int i = 0; i< tam; i++){
                dados[i] = SinglyLinkedList();
            }
        };

        void inserir (int elem){
            dados[hash(elem)].insereFim(elem);
        }

        void remover (int elem){
            dados[hash(elem)].insere(elem, dados[hash(elem)].qualAPosicaoDesseNumero(numElem));
        }

        void imprimir() {
            for (int i = 0; i < tam; i++) {
                cout << "Posicao [" << i << "]: ";
                No* atual = dados[i].primeiro();
                
                if (atual == nullptr) {
                    cout << "Vazia";
                } 
                else {
                    while (atual != nullptr) {
                        cout << atual->valor;
                        if (atual->next != nullptr) {
                            cout << " -> ";}
                        atual = atual->next;}
                    }      
            cout << endl;
    }
}



};
