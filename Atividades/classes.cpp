/*
    Aluno: Lucas Bispo Lisboa
    N° da Matricula: 202500056596
*/

#include <iostream>
using namespace std;

const int erro = -1;
const int aceita = 0;

//1° Implementação das Classes

//1° a) ArrayDinamico
class ArrayDinamico{ 
    private:
        int* dados;
        int tam;
        void Expandir(){
            int* novo = new int[2*sizeof(dados)];
            for(int i = 0; i < sizeof(dados)-1; i++){
                novo[i] = dados[i];
            }
            dados = novo;
        }

    public:
        ArrayDinamico(int c){
            dados = new int(c);
            tam = 0;
        }

        int Adicionar(int valor, int posicao){
            if(posicao < 0 || posicao > tam){return erro;}
            if(tam == sizeof(dados)){Expandir();}

            for (int i = posicao; i < tam; i++){
                int velho = dados[i];
                dados[i] = valor;
                valor = velho;
            }
            tam = tam+1;
            return aceita;
        }

        int Remover (int posicao){
            if(posicao >= tam){return erro;}
            for(int i = posicao; i < tam-2; i++){
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

        int Size(){ return sizeof(dados); }
};

//No Simplesmente Encadeada
struct No {
    int valor;
    No* next;
    No(int novoValor, No* proximo){
        valor = novoValor;
        next = proximo;
    }
};

//1° b)SinglyLinkedList
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
            No atual = *head;
            while(&atual != nullptr){
                if(atual.valor == valor){
                    return &atual;
                }
                atual = *atual.next;
                return nullptr;
            }
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
        No novo(v,head);
        head = &novo;
        if(vazia()){trail = head;}
        tam = tam+1;
    }

    void insereFim (int v){
        No novo(v,nullptr);
        if(vazia()){head = &novo;}
        else{
            trail->next = &novo;
        }
    }

    int insere(int v, int idx){
        if(idx<0 || idx > tam){return erro;}
        if(idx == 0){ insereInicio(v);}
        else if(idx == tam){ insereFim(v);}
        else{
            No* prev = no(idx-1);
            No novo(v,prev->next);
            prev->next = &novo;
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
    };

//1° c)

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



//1° d)DoublyLinkedList

//Nó Duplamente Encadeado
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
            header = new No_DE(NULL,nullptr,nullptr);
            trailer = new No_DE(NULL,header,nullptr);
            header->next = trailer;
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

//2° a)
int circularJosephus(int M, int N){
    CircularlyLinkedList lista;
    for(int i = 0; i<N; i++){         // O(N) 
        lista.insereFim(i);           // aloca para N nós 
    }
    
    while(lista.size() > 1){          // O(N-1)
        for(int i = 0; i<M - 1; i++){ // O(M-1)  
            lista.girar();            //O(1)
        }
        lista.removeInicio();         // O(7) = O(1)
    } 
    
    // Fica: (N-1) * ((M-1) + 1) -> N * (M +1)
    //       N*M + N 
    
    return lista.primeiro()->valor;   //O(1)

    /*
    N + N*M + N = 2N + N*M + 1
    Aproximadamente N+N*M -> O(n*m) operacional.

    Alocação memória:
    O(n) --> da alocação para os nós
    O(1) --> Para ponteiros temporários
    O(n + 1) = O(n)
    */

}

//2° b)
int arrayJosephus(int M, int N){
    int next[N];                    // O(1)
    //Reserva n números -> O(n) de memória 
    for(int i = 0; i<N-1; i++){     // N-1
        next[i] = i+1;              // O(1)
    } 
    //(N-1) *1 -> O(N)

    next[N-1] = 0;                  //O(1)

    int atual = N-1;                //O(1)
    // O(1) de memória
    
    while( atual != next[atual]){   //N-1
        for(int i = 0; i<M-1; i++){ //M-1
            atual=next[atual];      //O(1)
        }
        int eliminado = next[atual];//O(1)
        /* Mesmo sendo criado n vezes, 
        ele ocupa o memso estado de memória n vezes. O(1)*/
        next[atual]=next[eliminado];//O(1)
    }
    // 2N + N*M --> O(N + N*M)
    return atual;                   //O(1)

    //  O(N) + O(N + N*M) + O(1)
    //  (2N + N*M) + 1 --> O(N + N*M)
    //  --> O(n*m) operacional

    /*
    Alocação de memória:
    N + 1 + 1 -> O(n)
    */
} 
/*
2° c)
    Comparando as duas, circularJosephus ocuparia mais.
    Visto que além dos números, ele também guarda o endereço do próximo.

    Vantagens de circularJosephus:
    Remoção de um elemento não afeta a organização dos dados.
    O nó removido pode ser liberado na memória através de um destrutor na classe base.

    Desvantagens de circularJosephus:
    Precisa cria um nó extra pra cada ponteiro.
    Nós são alocados na Heap. Precisa procurar físicamente cada nó.

    Vantagens de arrayJosephus:
    Gasta apenas o espaço dos inteiros.
    Estão próximos na memória.

    Desvantagens de circularJosephus:
    Valor constante de memória, mesmo diminuindo o número de pessoas no círculo.
    Tamanho de next[n] depende do limite da memória.
    */


//3° a)
int buscaBinariaArray(int x, int C[], int tamanho_array){
    int L = 0;               //1   
    int R = tamanho_array-1; //1
    
    while(L<=R){            // 
        int m = (L+R)/2;    //O(1)
        if(C[m] == x){      
            return m;       //O(1) ou 0
        }
        else if(C[m]<x){
            L = m+1;        //O(1) ou 0
        }
        else{
            R = m-1;        //O(1) ou 0
        }
        /* Ele sempre divide na metade a marcação de m.
            (n, n/2, n/4, ..., 1)
            Sendo k vezes que ele se divide. 
            Fazendo k passos, ou seja, O(k).
            n/2**k = 1 --> N = 2**k
            k = log_2 n
            O(log_2 n) -- logaritmo de base 2 de n.
        */
    }
    return -1;              //1
}
// 1 + 1 + (log_2 n) -> O(log n)
/*
    Custo O(1), não depende do tamanho do array.
*/

//3° b)
int buscaBináriaLista (int x, DoublyLinkedList C){
    int L=0;                // O(1)
    int R = C.size() - 1;   // O(1)

    while(L <= R){          
        int m = L + (R-L)/2; //1 
        // n/2 + n/4 + ... + 1 = n
        
        No_DE* atual = C.primeiro(); //1
        for(int i =0; i<m; i++){    
            //log2N
            atual = atual->next;    //1
        }

        if(atual->valor == x){
            return m;       //1
        }

        if(atual->valor<x){
            L=m+1;          //1
        }

        else{
            R=m-1;          //1
        }
    //N * (1 + 1 + log2n +1)
    //n + n + nlog2n + n
    //3n + nlog2n -> O(n*logn)
    return -1;              //1

    //O(1) + O(1) + O(n*logn) -> O(n*logn)
}
    /*
    Custo de memória O(1), utilizando criação de ponteiros.
    
3° c)
    Vantagem de Array: Acesso instantâneo.

    Vantagem da Lista: A remoção ou inserção de um elemento.
    Mas o acesso é mais lento pois precisa caminhar pelos nós.

    */
}

