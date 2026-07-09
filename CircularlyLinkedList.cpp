#include <iostream>
#include "no.cpp"
using namespace std;

const int erro = -1;
const int aceita = 0;

class CircularlyLinkedList{
        private:
            No* trail;
            int tam;
        public:
            CircularlyLinkedList(){
                trail = nullptr;
                tam = 0;
            }
            int size(){return tam;}
            bool vazia(){return tam == 0;}
            
            No* primeiro(){
                if(vazia()) {return nullptr;}
                return trail->next;
            }

            No* ultimo(){
                if(vazia()) {return nullptr;}
                return trail;
            }

            void girar() {
                if(trail!=nullptr){
                    trail = trail->next;
                }
            }

            void insereInicio(int v){
                if(vazia()){    
                    trail = new No(v,nullptr);
                    trail->next = trail;
                }
                else{
                    No* novo = new No(v,trail->next);
                    trail->next = novo;
                }
                tam = tam+1;
            }

            void insereFim(int v){
                insereInicio(v);
                girar();
            }

            int removeInicio(){ //7 Operações
                if(vazia()){return -1;}

                No* head = trail->next;
                int valor_da_head = head->valor;

                if(head == trail){
                    trail = nullptr;
                }
                else{
                    trail->next = head->next;
                }

                tam = tam-1;
                return valor_da_head;
            }

    };
