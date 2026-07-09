#include <iostream>
#include "no.cpp"
#include "ArrayDinamico.cpp"
#include "CircularlyLinkedList.cpp"
#include "DoublyLinkedList.cpp"
#include "SinglyLinkedList.cpp"
using namespace std;

const int erro = -1;
const int aceita = 0;

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
int buscaBinariaLista (int x, DoublyLinkedList C){
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

