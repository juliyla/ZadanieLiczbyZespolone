#include <iostream>
#include "BazaTestu.hh"

using namespace std;

LZespolona utwoz(double Re, double Im){
  LZespolona z;
  z.re=Re;
  z.im=Im;
  return z;
}
void Wyswietl(LZespolona l){
  cout<<'('<<l.re<<showpos<<l.im<<noshowpos<<'i'<<')'<<endl;

}

int main(int argc, char **argv)
{

  LZespolona L1=utwoz(2,-3);
  Wyswietl(L1);
  LZespolona L2=utwoz(3,4);
  Wyswietl(L2);
  LZespolona L3=L1-L2;
  Wyswietl(L3);

  
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
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << " Czesc rzeczywista pierwszego argumentu: ";
    cout << WyrZ_PytanieTestowe.Arg1.re << endl;
  }
  
  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;
  */
}
