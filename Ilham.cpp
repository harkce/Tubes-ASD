#include <iostream>
#include "KorbanAsap.hpp"

using namespace std;

void insertFirstKorban(Korban &korban, AdrK keluarga) {
    if(firstK(korban) == Nil){
        firstK(korban) = keluarga;
    }
    else{
    nextK(keluarga) = firstK(korban);
    firstK(korban) = keluarga;
    }
}

void insertFirstAnggota(AdrK keluarga, AdrA anggota) {
    if(firstA(keluarga) == Nil){
        firstA(keluarga) = anggota;
    }
    else{
    nextA(anggota) = firstA(keluarga);
    firstA(keluarga) = anggota;
    }
}

void deleteFirstKorban(Korban &korban) {
    if(nextK(firstK(korban)) == Nil){
        firstK(korban) = Nil;
    }
    else{
    adrK P = firstK(korban);
    firstK(korban) = nextK(P);
    nextK(P) = Nil;
    }
}

void deleteFirstAnggota(AdrK keluarga) {
    if(nextA(firstA(keluarga))==Nil){
        firstA(keluarga) = Nil;
    }
    else{
        adrA P = firstA(keluarga);
        firstA(keluarga) = nextA(P);
        nextA(P) = Nil;
    }
}
