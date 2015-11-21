#include <iostream>
#include "KorbanAsap.hpp"

using namespace std;

void hello() {
    cout << "Hello World!" << endl;
}

void createKorban(Korban &korban) {
    firstK(korban) = Nil;
}

AdrK alokasiKeluarga(InfoK data) {
    AdrK keluarga = new ElmKeluarga;
    infoK(keluarga) = data;
    nextK(keluarga) = Nil;
    firstA(keluarga) = Nil;
    return keluarga;
}

AdrA alokasiAnggota(InfoA data) {
    AdrA anggota = new ElmAnggota;
    infoA(anggota) = data;
    prevA(anggota) = Nil;
    nextA(anggota) = Nil;
    return anggota;
}
