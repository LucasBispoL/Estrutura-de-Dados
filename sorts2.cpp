#include <iostream>
#include "no.cpp"
#include "ArrayDinamico.cpp"
#include "CircularlyLinkedList.cpp"
#include "DoublyLinkedList.cpp"
#include "SinglyLinkedList.cpp"
#include <math.h>
using namespace std;
const int erro = -1;
const int aceita = 0;
using namespace std;

void insertion_sort (ArrayDinamico& a){
    for (int i = 1; i < a.Numel(); i++){
        int k = a.Get(i);
        int j = i - 1;

        while(j>=0 && k < a.Get(j)){
            a.Set(a.Get(j), j+1);
            j = j-1;
        }
        a.Set(k, j+1);
    }
}

void insertion_sort (SinglyLinkedList& l){
    for (int i = 1; i < l.size(); i++){
        int k = l.no(i)->valor;
        int j = i - 1;

        while(j>=0 && k < l.no(j)->valor){
            j = j-1;
        }
        l.insere(k, j+1);
        }
    }

void insertion_sort (CircularlyLinkedList& c){
    for (int i = 1; i < c.size(); i++){
        for(int j = 0; j <= i; j++){ 
            c.girar();
            }

    int k = c.primeiro()->valor;
    int j = i-1;
    
    while(j>= 0 && k < )
    }

}


ArrayDinamico selection_sort(ArrayDinamico& a){
    for (int i = 0; i < a.Numel(); i++){
        int min = a.Get(i);
        int posicao_min = i;
        for(int j=i+1; j < a.Numel(); j++){
            if(a.Get(j)<min){
                min = a.Get(j);
                posicao_min = j;
            }
        }

        if(posicao_min != i){
            int aux = a.Get(i);
            a.Set(a.Get(posicao_min), i);
            a.Set(aux, posicao_min);
        }
    }
    return a;
}

ArrayDinamico bubble_sort (ArrayDinamico& a){
    for(int i = 2; i < a.Numel(); i++){
        bool trocou = false;
        for(int j = 0; j < a.Numel()-1;j++){
            if(a.Get(j) > a.Get(j+1)){
                int aux = a.Get(j);
                a.Set(a.Get(j+1), j);
                a.Set(aux, j+1);
                trocou = true;
            }

            if(trocou == false){
                break;
            }
        }
    }
    return a;
}

// merge pra função merge_sort

ArrayDinamico merge(ArrayDinamico& a, ArrayDinamico& b){
    int i = 0, j = 0, k = 0;
    int m = a.Numel(), n = b.Numel();

    ArrayDinamico c(m + n);
    
    while(i<m && j<n){
        if(a.Get(i) <= b.Get(j)){
            c.Adicionar(a.Get(i), k);
            i++;
        }
        else{
            c.Adicionar(b.Get(j), k);
            j++;
        }
        k++;
    }
    if(i>=m){
        while(j<n){
            c.Adicionar(b.Get(j), k);
            j++; k++;
        }
    }
    else{
        while(i<m){
            c.Adicionar(a.Get(i), k);
            i++; k++;
        }
    }
    return c;
}

ArrayDinamico merge_sort(ArrayDinamico& a){
    int n = a.Numel();
    if(n<=1){
        return a;
    }
    else{
        int meio = n/2;
        ArrayDinamico esquerda(meio);
        ArrayDinamico direita(n-meio);
        
        for(int i = 0; i < meio;i++){
            esquerda.Adicionar(a.Get(i), i);
        }
        
        for(int i = meio; i < n; i++){
            direita.Adicionar(a.Get(i), i-meio);
        }

        ArrayDinamico b = merge_sort(esquerda);
        ArrayDinamico c = merge_sort(direita);
        
        return merge(b,c);
    }
}

//Partition para o quick_sort

int partition (ArrayDinamico& a, int l, int r){
    int k = 0;
    for(int i = l; i < r-1; i++){
        if(a.Get(i)<=a.Get(r)){
            int aux = a.Get(k);
            a.Set(a.Get(i), k);
            a.Set(aux, i);
            k++;
        }
    }
    return k;
}

ArrayDinamico quick_sort (ArrayDinamico& a, int l, int r){
    if(r>l){
        int k = partition(a,l,r);
        quick_sort(a,l,k-1);
        quick_sort(a,k+1,r);
    }
    return a;
}

ArrayDinamico counting_sort (ArrayDinamico& a, int k){
    ArrayDinamico f (k+1);
    for (int i = 0; i <= k+1; i++){
        f.Adicionar(0, i);
    }

    for (int i = 0; i <= a.Numel() -1; i++){
        f.Set(f.Get(a.Get(i)+1), a.Get(i));
    }

    for (int i = 1; i <= k; i++){
        f.Set(f.Get(i)+f.Get(i-1), i);
    }
    ArrayDinamico s (a.Numel());
    for (int i = a.Numel()-1; i >= 0; i--){
        s.Adicionar(a.Get(i), f.Get(a.Get(i)-1));
        f.Set(a.Get(i)-1, a.Get(i));
    }
    return a;
}

void radix_sort(ArrayDinamico& a){
    for (int i = 1; i< a.Numel(); i++){
        //
    }
}

void bucket_sort(ArrayDinamico& a){
    int n = a.Numel();

    SinglyLinkedList* l = new SinglyLinkedList[n];
    
    int max = a.Get(0);
    for(int i = 0; i<n; i++){
        if(a.Get(i) > max) {max = a.Get(i);}
    }

    if(max == 0){return;}

    for(int i = 0; i < n; i++){
        int idx = (n-1) * a.Get(i) / max;
        l[idx].insereInicio(a.Get(i));
    }

    int idx_a = 0;
    for(int i = 0; i < n; i++){
        insertion_sort(l[i]);
        No* atual = l[i].primeiro();
        while(atual!= nullptr){
            a.Set(atual->valor, idx_a);
            idx_a++;
            atual = atual->next;
        }
    }
    }

int main(){ 
    ArrayDinamico a(5), b(5), c(5), d(5), e(5);
    int entrada;
    for(int i = 0; i<5; i++){
        if(scanf("%i", &entrada) == 1){
        a.Adicionar(entrada, i);
        b.Adicionar(entrada, i);
        c.Adicionar(entrada, i);
        d.Adicionar(entrada, i);
        }
    }

    printf("Merge Sort: ");
    ArrayDinamico A = merge_sort(a);
    for (int i = 0; i<A.Numel(); i++){
        printf("%i ", A.Get(i));
    }
    printf("\n");

    printf("Insertion Sort: ");
    insertion_sort(b);
    for (int i = 0; i<b.Numel(); i++){
        printf("%i ", b.Get(i));
    }
printf("\n");

    printf("Selection Sort: ");
    selection_sort(c);
    for (int i = 0; i<c.Numel(); i++){
        printf("%i ", c.Get(i));
    }
printf("\n");

    printf("Bubble Sort: ");
    selection_sort(d);
    for (int i = 0; i<d.Numel(); i++){
        printf("%i ", d.Get(i));
    }

printf("\n");
    

}