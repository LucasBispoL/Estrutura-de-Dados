#include "ArrayDinamico.h"
#include "CircularlyLinkedList.h"
#include "heap.h"
#include "merge.h"
#include "no.h"
#include "SinglyLinkedList.h"
#include "sorts2.h"
#include "hashtable.h"
#include <iostream>
using namespace std;

int main(){
    int tam = 3;
    hashTable H (tam);
    int sair = 0;
    cout << "-_ Programa de Hash Table _-" << endl;
    
    while (sair == 0){
        cout << "Insira um numero: ";
        int n;
        cin >> n;
        if (n == 1){
            cout << "Saindo" << endl;
            sair = 1;
        }
        H.inserir(n);
    }
    H.imprimir();

}