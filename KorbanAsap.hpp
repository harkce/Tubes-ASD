#ifndef KORBANASAP_HPP_INCLUDED
#define KORBANASAP_HPP_INCLUDED

#define Nil NULL
#define firstK(korban) korban.firstK
#define infoK(keluarga) keluarga->infoK
#define firstA(keluarga) keluarga->firstA
#define nextK(keluarga) keluarga->nextK
#define infoA(anggota) anggota->infoA
#define prevA(anggota) anggota->prevA
#define nextA(anggota) anggota->nextA

using namespace std;

typedef struct ElmKeluarga *AdrK;
typedef struct ElmAnggota *AdrA;

struct InfoK {
    int idKeluarga;
    string namaKK;
    int jumlahAnggota;
    int jumlahSakit;
};

struct InfoA {
    int idAnggota;
    string nama;
    string status;
    bool isSakit;
};

struct ElmKeluarga {
    InfoK infoK;
    AdrA firstA;
    AdrK nextK;
};

struct ElmAnggota {
    InfoA infoA;
    AdrA prevA;
    AdrA nextA;
};

struct Korban {
    AdrK firstK;
};

void createKorban(Korban &korban);
AdrK alokasiKeluarga(InfoK data);
AdrA alokasiAnggota(InfoA data);

void insertFirstKorban(Korban &korban, AdrK keluarga);
void insertFirstAnggota(AdrK keluarga, AdrA anggota);
void deleteFirstKorban(Korban &korban);
void deleteFirstAnggota(AdrK keluarga);

void insertLastKorban(Korban &korban, AdrK keluarga);
void insertLastAnggota(AdrK keluarga, AdrA anggota);
void deleteLastKorban(Korban &korban);
void deleteLastAnggota(AdrK keluarga);

void insertAfterKorban(Korban &korban, AdrK keluarga, AdrK data);
void insertAfterAnggota(AdrK keluarga, AdrA anggota, AdrA data);
void deleteAfterKorban(Korban &korban, AdrK keluarga);
void deleteAfterAnggota(AdrK keluarga, AdrA anggota);

void insertKeluarga(Korban &korban, AdrK keluarga);
void insertAnggota(AdrK keluarga, AdrA korban);

void hello();
void coba();

#endif // KORBANASAP_HPP_INCLUDED
