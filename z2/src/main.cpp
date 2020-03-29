#include <iostream>
#include "BazaTestu.hh"

using namespace std;



int main(int argc, char **argv)
{
int i;
Statystyka Stat;
inicjuj(Stat);
  
  /*  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
LZespolona Odp;
LZespolona Wynik;
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
cout << "Oblicz wyrazenie:";
cout << WyrZ_PytanieTestowe<<endl;
cout << "Twoja odpowiedz:";


for(i=0;i<3;i++){


cin >> Odp;
Wynik=Oblicz(WyrZ_PytanieTestowe);

if (!cin.good() ) {

if(i<2){
cout << "Blad formatu liczby zespolonej,sprobuj ponownie." <<endl;
cout << "Twoja odpowiedz:";
}
cin.clear( );
cin.ignore(10000,'\n');
dodaj_zla(Stat);

}

else{

if(Odp==Wynik){
dodaj_popr(Stat);
cout << "Odpowiedz poprawna." <<endl;

break;

}
else if(Odp!=Wynik){
dodaj_zla(Stat);
cout << "Odpowiedz niepoprawna." <<endl;

break;
}
} } }
cout<<"Koniec testu."<<endl;
cout<<"Statystyka:"<<endl;
cout << Stat;
cout<<endl;

}