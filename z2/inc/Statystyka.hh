#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH
using namespace std;
struct Statystyka {

  int poprawne;
  int wszystkie;
  
};

void inicjuj(Statystyka &stat);
void wyswietl(Statystyka &stat);
void dodaj_popr(Statystyka &stat);
void dodaj_zla(Statystyka &stat);
int ile_wszystkich(Statystyka &stat);
int ile_poprawnych(Statystyka &stat);
float procent_poprawnych(Statystyka &stat);

ostream & operator <<(ostream &strm,  Statystyka &stat);

#endif