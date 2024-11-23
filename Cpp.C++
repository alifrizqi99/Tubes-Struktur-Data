#include "tubeskel15.h"

void createListAtlet (ListAtlet &L){
    first(L) = NULL;
}
void createListClub (ListClub &L);
adr_Atlet createElemenAtlet (infotype A){
    adr_Atlet P = new elmAtlet;
    info(P) = A;
    next(P) = NULL;
    nextAtlet(P) = NULL;
    return P;
}
adr_Club createElemenClub (infotype C);
void InsertElemenAtlet (ListAtlet &L, adr_Atlet P);
void InsertElemenClub (ListClub &L, adr_Club P);
void InsertElemenRelation (adr_relation R, ListClub &L);
void DeleteElemenAtlet (ListAtlet &L, adr_Atlet P);
void DeleteElemenClub (ListClub &L, adr_Club P);
void DeleterElemenRelation (adr_relation R, ListClub &L);
