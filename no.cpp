#include <iostream>
using namespace std;

struct No {
    int valor;
    No* next;
    No(int novoValor, No* proximo){
        valor = novoValor;
        next = proximo;
    }
};

struct No_DE{ 
    int valor;
    No_DE* next;
    No_DE* prev;  

    No_DE(int No_DEvoValor, No_DE* anterior, No_DE* proximo){
        valor = No_DEvoValor;
        next = proximo;
        prev = anterior;
    }
};

struct Node {
    Node* esq;
    Node* dir;
    int valor;
    Node (Node* esq, Node* dir, int valor){
        this->esq = esq;
        this->dir = dir;
        this->valor = valor;
    }; 
};