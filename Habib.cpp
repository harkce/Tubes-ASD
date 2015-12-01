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

AdrK lastK(Korban korban) {
    AdrK keluarga = firstK(korban);
    if(nextK(keluarga) != Nil) {
        while(nextK(keluarga) != Nil) {
            keluarga = nextK(keluarga);
        }
    }
    return keluarga;
}

AdrA lastA(AdrK keluarga) {
    AdrA anggota = firstA(keluarga);
    if(nextA(anggota) != Nil) {
        while(nextA(anggota) != Nil) {
            anggota = nextA(anggota);
        }
    }
    return anggota;
}

AdrK cariKeluarga(Korban korban, int id) {
    AdrK keluarga = firstK(korban);
    while(keluarga != Nil && infoK(keluarga).idKeluarga != id) {
        keluarga = nextK(keluarga);
    }
    return keluarga;
}

AdrA cariAnggota(AdrK keluarga, int id) {
    AdrA anggota = firstA(keluarga);
    while(anggota != Nil && infoA(anggota).idAnggota != id) {
        anggota = nextA(anggota);
    }
    return anggota;
}

void insertKeluarga(Korban &korban, AdrK data) {
    if(firstK(korban) == Nil || infoK(data).idKeluarga < infoK(firstK(korban)).idKeluarga) {
        insertFirstKorban(korban, data);
    }
    else {
        if(infoK(data).idKeluarga > infoK(lastK(korban)).idKeluarga) {
            insertLastKorban(korban, data);
        }
        else {
            AdrK i = firstK(korban);
            while(infoK(data).idKeluarga < infoK(nextK(i)).idKeluarga) {
                i = nextK(i);
            }
            if(infoK(data).idKeluarga < infoK(nextK(i)).idKeluarga) {
                insertAfterKorban(korban, i, data);
            }
        }
    }
}

void insertAnggota(AdrK keluarga, AdrA data) {
    if(firstA(keluarga) == Nil || infoA(data).idAnggota < infoA(firstA(keluarga)).idAnggota) {
        insertFirstAnggota(keluarga, data);
    }
    else {
        if(infoA(data).idAnggota > infoA(lastA(keluarga)).idAnggota) {
            insertLastAnggota(keluarga, data);
        }
        else {
            AdrA i = firstA(keluarga);
            while(infoA(data).idAnggota < infoA(nextA(i)).idAnggota) {
                i = nextA(i);
            }
            if(infoA(data).idAnggota < infoA(nextA(i)).idAnggota) {
                insertAfterAnggota(keluarga, i, data);
            }
        }
    }
}

void menuTampilKorban() {
    cout << "Daftar Korban" << endl;
    AdrK i = firstK(korban);
    while(i != Nil) {
        cout << "ID : " << infoK(i).idKeluarga << endl;
        cout << "Nama KK : " << infoK(i).namaKK << endl;
        cout << "Jumlah Anggota : " << infoK(i).jumlahAnggota << endl;
        cout << "Jumlah Sakit : " << infoK(i).jumlahSakit << endl;
        cout << "Anggota : " << endl;
    }
}
