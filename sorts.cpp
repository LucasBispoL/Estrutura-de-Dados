#include <iostream>
#include "classes.cpp"

using namespace std;

void insertion_sort (ArrayDinamico& a){
    for (int i = 1; i < a.Numel() - 1; i++){
        int k = a.Get(i);
        int j = i - 1;
        while(j>0 && k < a.Get(j)){
            a.Set(a.Get(j), j+1);
            j = j-1;
        }
        a.Set(k, j+1);
    }
}

void selection_sort(ArrayDinamico& a){
    for (int i = 0; i < a.Numel()-1; i++){
        int min = a.Get(i);
        int posicao_min = i;
        for(int j=i+1; j < a.Numel()-1; j++){
            if(a.Get(j)<min){
                min = a.Get(j);
                posicao_min = j;
            }
        }
        //"troque a[i] e a[pos_min]"
        if(posicao_min != i){
            int aux = a.Get(i);
            a.Set(a.Get(posicao_min), i);
            a.Set(aux, posicao_min);
        }
    }
}

void bubble_sort (ArrayDinamico& a){
    for(int i = 2; i < a.Numel(); i++){
        bool trocou = false;
        for(int j = 0; j < a.Numel()-1;i++){
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
}

// merge pra função merge_sort

ArrayDinamico merge(ArrayDinamico& a, ArrayDinamico& b){
    int i = 0;
    int j = 0;
    int k = 0;
    int m = a.Numel();
    int n = b.Numel();
    ArrayDinamico c(m + n);
    while(i<m && j<n){
        if(a.Get(i)<=b.Get(j)){
            c.Adicionar(a.Get(i), k);
            i++;
        }
        else{
            c.Adicionar(b.Get(j), k);
            j++;
        }
    }
    if(i>=m){
        while(j<n){
            c.Adicionar(b.Get(j), k);
            j++; k++;
        }
    }
    else{
        while(i<m){
            c.Adicionar(b.Get(i), k);
            i++; k++;
        }
    }
    return c;
}

ArrayDinamico merge_sort(ArrayDinamico& a){
    int n = a.Numel();
    if(n=1){
        return a;
    }
    else{
        /*
            meio <- (n-1)/2 arredondado pra baixo
            b <- merge_sort (a[0...meio])
            c <- merge_sort (a[meio+1..n-1])
            retorne merge(b,c)
            
        */
        int meio = (n-1)/2;
        ArrayDinamico b(n/2);
        ArrayDinamico c(n/2);
        for(int i = 0; i <= meio;i++){
            b.Adicionar(a.Get(i), i);
        }
        merge_sort(b);
        for(int i = n; i>= meio; i--){
            c.Adicionar(a.Get(i), i);
        }
        merge_sort(c);
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

void quick_sort (ArrayDinamico& a, int l, int r){
    if(r>l){
        int k = partition(a,l,r);
        quick_sort(a,l,k-1);
        quick_sort(a,k+1,r);
    }
}

void counting_sort (ArrayDinamico& a, int k){
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
}

void radix_sort(ArrayDinamico& a){
    for (int i = 1; i< a.Numel(); i++){
        //
    }
}

ArrayDinamico bucket_sort(ArrayDinamico& a){
    for(int i = a.Numel(); i<0; i--){
        
    }
}