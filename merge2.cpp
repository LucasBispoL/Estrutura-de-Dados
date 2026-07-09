#include <iostream>
using namespace std;

void merge (int a[], int l, int m, int r){
    int nL = m-l+1, nR = r-m;
    int l[nL], r[nR];
    for(int i = 0; i<nL-1; i++){
        r[i] = a[m+1+i];
        i=0;
        int j=0;
        while(i<nL && j<nR){
            if(r[j] <l<i){
                a[l] = r[j];
                j++;
            }
            else{
                a[l] = l[i];
                i++;
            }
            l++;
        }
        while (j<nL){
            a[l++] = r[j++];
        }
    }
}

void merge_sort (int a[], int l, int r){
    if(l<r){
        int m = (l+r)/2;
        merge_sort(a[], l, m);
        merge_sort(a[], m+1, r);
        merge(a[],l,m,r);
    }

}