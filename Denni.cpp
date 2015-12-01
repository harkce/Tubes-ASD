#include <iostream>
#include "KorbanAsap.hpp"

using namespace std;

void insertAfterKorban(Korban &korban, AdrK keluarga, AdrK data) {
    nextK(data) = nextK(keluarga);
    nextK(keluarga) = data;

}

void insertAfterAnggota(AdrK keluarga, AdrA anggota, AdrA data) {
    AdrA P = nextA(anggota);
    nextA(data) = P;
    prevA(P) = data;
    nextA(anggota) = data;
    prevA(data) = anggota;

}

void deleteAfterKorban(Korban &korban, AdrK keluarga) {
    AdrK P = nextK(keluarga);
    nextK(keluarga) = nextK(P);
    nextK(P) = Nil;

}

void deleteAfterAnggota(AdrK keluarga, AdrA anggota) {
    AdrA P = nextA(anggota);
    AdrA Q = nextA(P);
    nextA(anggota) = Q;
    prevA(Q) = anggota;
    nextA(P) = Nil;
    prevA(P) = Nil;

}

void menuUtama(){
    int pilihan;
    cout << "1. Insert Keluarga" << endl;
    cout << "2. Insert Anggota" << endl;
    cout << "3. Tampilkan Korban Asap" << endl;
    cout << "4. Cari Keluarga" << endl;
    cout << "5. Cari Anggota" << endl;
    cout << "6. Edit Keluarga" << endl;
    cout << "7. Edit Anggota" << endl;
    cout << "8. Hapus Keluarga" << endl;
    cout << "9. Hapus Anggota" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan pilihan :"; cin >> pilihan;
    switch (pilihan){
        case 1 :
            menuInsertKeluarga();
            break;
        case 2 :
            menuInsertAnggota();
            break;
        case 3 :
            menuTampilKorban();
            break;
        case 4 :
            menuCariKeluarga();
            break;
        case 5 :
            menuCariAnggota();
            break;
        case 6 :
            menuEditKeluarga();
            break;
        case 7 :
            menuEditAnggota();
            break;
        case 8 :
            menuHapusKeluarga();
            break;
        case 9 :
            menuHapusAnggota();
            break;
        case 0 :
            exit(0);
            break;
        default :
            menuUtama();
    }
}

void menuInsertKeluarga() {
    // panggil prosedur insertKeluarga(Korban &korban, AdrK Keluarga)
    in
}

void menuInsertAnggota() {
    // panggil prosedur insertAnggota(AdrK Keluarga, AdrA Anggota)
}

void menuHapusKeluarga() {
    // panggil prosedur hapusKeluarga(Korban &korban)   
}

void menuHapusAnggota() {
    // panggil prosedur hapusAnggota(AdrK keluarga)
}