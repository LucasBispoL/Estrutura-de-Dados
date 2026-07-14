#include <iostream>
#include "SinglyLinkedList.cpp"
using namespace std;

class hashTable{
    private:
        SinglyLinkedList* dados;
        int numElem;
        bool limite;

        int hash (int elem){
            int f = elem * 2;
            return f % 10;
        }

    public:
        hashTable (){};

        hashTable (int tam){
            dados = new SinglyLinkedList [tam];
            for(int i = 0; i<= tam; i++){
                dados[i] = SinglyLinkedList();
            }
        };

        void inserir (int elem){
            dados[hash(elem)].insereFim(elem);
        }

};
