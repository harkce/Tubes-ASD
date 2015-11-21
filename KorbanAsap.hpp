#ifndef KORBANASAP_HPP_INCLUDED
#define KORBANASAP_HPP_INCLUDED

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
    AdrA firstAnggota;
    AdrK nextKeluarga;
};

struct ElmAnggota {
    InfoA infoA;
    AdrA prevAnggota;
    AdrA nextAnggota;
};

struct Korban {
    AdrK firstKeluarga;
};

void createKorban(Korban k);
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

void hello();

#endif // KORBANASAP_HPP_INCLUDED
