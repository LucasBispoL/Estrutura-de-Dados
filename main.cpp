#include "ArrayDinamico.cpp"
#include "CircularlyLinkedList.cpp"
#include "heap.cpp"
#include "merge.cpp"
#include "no.cpp"
#include "SinglyLinkedList.cpp"
#include "sorts.cpp"
#include "sorts2.cpp"
#include "hashtable.cpp"
using namespace std;

int main(){
    int tam = 3;
    hashTable H (tam);
    int sair = 0;
    cout << "-_ (/Owo)/ Programa de Hash Table _-" << endl;
    
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