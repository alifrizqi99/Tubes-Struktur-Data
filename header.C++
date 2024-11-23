#ifndef TUBESKEL15_H_INCLUDED
#define TUBESKEL15_H_INCLUDED
#include <iostream>
#include <stdio.h>
#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(mll) mll.first

struct Atlet {
    string ID;
    string NamaA;
    string Tanggal;
    string jeniskelamin;
    string usia;
    int JumlahClub;
};

struct Club {
    string ID;
    string NamaC;
    string pelatih;
    int JumlahAnggota;
};

typedef Atlet infotype;
typedef club infotype;

typedef struct elmAtlet *adr_Atlet;
typedef struct elmClub *adr_Club;

struct elmAtlet {
    infotype info;
    adr_Atlet next;
    adr_Club nextClub;
};

struct elmClub {
    infotype info;
    adr_Club next;
};

struct ListAtlet {
    adr_Atlet first;
};

struct ListClub {
    adr_Club first;
};


void createListAtlet (ListAtlet &L);
void createListClub (ListClub &L);
adr_Atlet createElemenAtlet (infotype A);
adr_Club createElemenClub (infotype C);
void InsertElemenAtlet (ListAtlet &L, adr_Atlet P);
void InsertElemenClub (ListClub &L, adr_Club P);
void InsertElemenRelation (adr_relation R, ListClub &L);
void DeleteElemenAtlet (ListAtlet &L, adr_Atlet P);
void DeleteElemenClub (ListClub &L, adr_Club P);
void DeleterElemenRelation (adr_relation R, ListClub &L);
void FindAtlet ()
#endif // TUBESKEL15_H_INCLUDED

