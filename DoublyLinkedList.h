#ifndef DLIST
#define DLIST

#include "no.h"


class DoublyLinkedList{
    private:
        No_DE* header;
        No_DE* trailer;
        int tam;

        void insereEntre(int valor, No_DE* predecessor, No_DE* sucessor){
            No_DE* No_DEvo= new No_DE(valor,predecessor,sucessor);
            predecessor->next = No_DEvo;
            sucessor->prev = No_DEvo;
            tam = tam+1;
        }
        
        No_DE* remove(No_DE* No_DE){
            No_DE->prev->next = No_DE->next;
            No_DE->next->prev = No_DE->prev;
            tam = tam - 1;
            return No_DE;
        }

    public:
        DoublyLinkedList(){
            header = new No_DE(0,nullptr,nullptr);
            trailer = new No_DE(0,header,nullptr);
            header->next = trailer;
            tam = 0;
        }

        int size(){return tam;}
        bool vazia(){return tam == 0;}

        No_DE* primeiro(){
            if(vazia()){return nullptr;}
            return header->next;
        }

        No_DE* ultimo(){
            if(vazia()){return nullptr;}
            return trailer->prev;
        }

        void insereInicio(int v){
            insereEntre(v,header,header->next);
        }

        void insereFim(int v){
            insereEntre(v,trailer->prev,trailer);
        }

        No_DE* removeInicio(){
            if(vazia()){return nullptr;}
            return remove(header->next);
        }

        No_DE* removeFim(){
            if(vazia()){return nullptr;}
            return remove(trailer->prev);
        }
        
};

#endif