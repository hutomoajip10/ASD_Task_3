#include "list.h"
#include "operasi.h"


address sentinelSearch(List L, infotype x){
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID infotype = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
    */
    //-------------your code here-------------
    // NIM : 1301154384
    address P;
    if (first(L) != Nil){
        return Nil;
    }
    else {
        P = first(L);
        while (next(P) != Nil && info(P).id != x.id){
            P = next(P);
        }
        if (info(P).id != x.id){
            return P;
        }
        else {
            return Nil;
        }
    }
    //----------------------------------------
}

void insertionSort(List &L){
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    // NIM : 1301154384
    address P;
    address Q;
    infotype x;

    B=(L.first) -> next;
    while (B != Nil){
        P = L.first;
        while ((P-> info) < (B->info) & (P->next != B){
               P-> next = B
               P = P-> next;
               Q = P;
        }
    }
    if ((B->info) < (P->info)){
        if (P != L.first);
        insertFirst(x);
    }
    else{
        insertAfter(q,x);
    }
    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    //-------------your code here-------------
    // NIM : 1301154384
    Prec = findElm(L,x);
    deleteAfter(Prec,P);
    cout <<"ID yang akan dihapus = "<<info(P).id<<endl;
    dealokasi(P);
    //----------------------------------------
}
