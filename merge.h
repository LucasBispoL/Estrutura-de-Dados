#ifndef MERGE
#define MERGE

void merge (int a[], int l, int m, int r){
    int nL = m-l, nR = r-m;

    int* eT = new int[nL];
    int* dT = new int[nR];

    for(int i = 0; i<nL; i++){
        eT[i] = a[l+i];
    }
    for(int j=0; j< nR; j++){
        dT[j] = a[m+1+j];
    }
    int i = 0, j = 0, k = l;

    while (i < nL && j < nR){
        if(eT[i] <= dT[j]){
            a[k] = eT[i];
            i++;
        }
        else{
            a[k] = dT[j];
            j++;
        }
        k++;
    }

    while (i<nL){
        a[k++] = eT[i++];
    }
    while(j<nR){
        a[k++] = dT[j++];
    }

    delete[] eT;
    delete[] dT;
}

void merge_sort (int a[], int l, int r){
    if(l<r){
        int m = (l+r)/2;
        merge_sort(a, l, m);
        merge_sort(a, m+1, r);
        merge(a,l,m,r);
    }

}
#endif