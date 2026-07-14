#include <iostream>
#include "no.cpp"
using namespace std;

const int erro = -1;
const int aceita = 0;

class SinglyLinkedList {
    private: 
        No* head;
        No* trail;
        int tam;

    public:
        SinglyLinkedList(){
            head = nullptr;
            trail = nullptr;
            tam = 0;
        }

        int size(){return tam;}

        bool vazia(){return tam == 0;}

        No* primeiro(){
            if(vazia()){return nullptr;}
            return head;
        }

        No* ultimo(){
            if(vazia()){return nullptr;}
            return trail;
        }

        No* busca(int valor){
            No* atual = head;
            while(atual != nullptr){
                if(atual->valor == valor){
                    return atual;
                }
                atual = atual->next;
            }
            return nullptr;
        }

        No* no(int idx){
            if(idx < 0|| idx > tam-1){return nullptr;}
            No* x = head;
            for(int i = 1; i < idx; i++){
                x = x->next;
            }
            return x;
        }

    void insereInicio(int v){
        No* novo = new No(v,head);
        head = novo;
        if(vazia()){trail = head;}
        tam = tam+1;
    }

    void insereFim (int v){
        No* novo = new No (v,nullptr);
        if(vazia()){
            head = novo;
            trail = novo;}
        else{
            trail->next = novo;
            trail = novo;
        }
            tam = tam + 1;
    }

    int insere(int v, int idx){
        if(idx<0 || idx > tam){return erro;}
        if(idx == 0){ insereInicio(v); return aceita;}
        else if(idx == tam){ insereFim(v); return aceita;}
        else{
            No* prev = no(idx-1);
            prev->next = new No(v, prev->next);
            tam = tam+1;
            return aceita;
        }
    }

    No* removeInicio(){
        if (vazia()) {return nullptr;}
        No* first = head;
        head = head->next;
        tam = tam-1;
        if(vazia()){
            trail = nullptr;
        }
        return first;
    }


    No* remove(int idx){
        if (vazia()){return nullptr;}
        if(idx<0||tam-1){ return nullptr;}
        if(idx == 0){removeInicio();}
        else{
            No* prev = no(idx-1);
            No* ret = prev->next;
            prev->next = prev->next->next;
            tam = tam-1;
            return ret;
        }
    }

    int qualAPosicaoDesseNumero(int posicao){
        int n = 0;
        No* atual = head;
        while (atual != nullptr || n <= posicao)
        {
            n++;
            atual = atual->next;
        }
        return n;
    }
    };