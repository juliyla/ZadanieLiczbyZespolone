#include "Statystyka.hh"
using namespace std;

void inicjuj(Statystyka &stat){
   stat.poprawne=0;
   stat.wszystkie=0;
}

void wyswietl(Statystyka &stat){
cout<<stat.poprawne;
cout<<stat.wszystkie;
}

int ile_poprawnych(Statystyka &stat){
stat.poprawne++;
return stat.poprawne;
}

void dodaj_popr(Statystyka &stat){
ile_poprawnych(stat);
 ile_wszystkich(stat);
}

void dodaj_zla(Statystyka &stat){
ile_wszystkich(stat);
}

int ile_wszystkich(Statystyka &stat){
 stat.wszystkie=stat.wszystkie+1;
 return st.wszystkie;
}

float procent_poprawnych(Statystyka &stat){
return ((float)stat.poprawne/(float)stat.wszystkie)*100;
}

ostream & operator <<(ostream &strm, Statystyki &st){
strm<<"Liczba pytan:"<< stat.wszystkie<<endl; 
strm<<"Liczba poprawnych odpowiedzi:"<< stat.poprawne<<endl;
strm<<"Liczba blednych odpowiedzi:"<<stat.wszystkie - stat.poprawne<<endl;
strm<<"Procent poprawnych odpowiedzi:"<<procent_poprawnych(stat);
return strm;
}
