#include "LZespolona.hh"
#include <math.h>

using std::cout;
using std::cin;
using std::showpos;
using std::noshowpos;
using std::istream;
using std::ostream;
using std::ios;
using std::cerr;


/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}


/*!
 * Realizuje odejmowanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik odejmowania,
 *    Skl2 - drugi skladnik odejmowania.
 * Zwraca:
 *    Roznice dwoch skladnikow przekazanych jako parametry.
 */

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

/*!
 * Realizuje mnozenie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik mnozenia,
 *    Skl2 - drugi skladnik mnozenia.
 * Zwraca:
 *   Iloczyn dwoch skladnikow przekazanych jako parametry.
 */

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2){
  LZespolona  Wynik;

  Wynik.re = (Skl1.re*Skl2.re)-(Skl1.im*Skl2.im);
  Wynik.im = (Skl1.re*Skl2.im)+(Skl1.im*Skl2.re);
  return Wynik;
}


/*!
 * Realizuje dzielenie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dzielenia,
 *    Skl2 - drugi skladnik dzielenia.
 * Zwraca:
 *    Iloraz dwoch skladnikow przekazanych jako parametry.
 */

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2){
  LZespolona  Wynik;

   Wynik= Skl1*sprzezenie(Skl2)/pow(modul(Skl2),2);
  
  return Wynik; 
  
}

LZespolona sprzezenie(LZespolona Skl1)
{
  LZespolona Wynik;
   Wynik.re=Skl1.re;
   Wynik.im=Skl1.im*-1;
   return Wynik;
}

double modul(LZespolona Skl1)
{
  double Wynik;
  Wynik=sqrt((Skl1.re * Skl1.re) + (Skl1.im * Skl1.im));
  return Wynik;
}

LZespolona operator / (LZespolona Skl1, double liczba)
{
  LZespolona Wynik;
  if(liczba==0){
  cout<<"Nie wolno dzielic przez 0"<<endl;
  }
  else
  Wynik.re=Skl1.re/liczba;
  Wynik.im=Skl1.im/liczba;
  
  return Wynik;
}


bool operator == (LZespolona Skl1, LZespolona Skl2){
  if(Skl1.re==Skl2.re && Skl1.im==Skl2.im)
    return true;
  else
    return false;

}

bool operator !=(LZespolona Skl1, LZespolona Skl2)
{
  if(Skl1.re!=Skl2.re || Skl1.im!=Skl2.im)
  return true;
  else
  return false;
}

/*Tworzenie liczby zespolonej */
LZespolona Utworz(double re, double im){
  
  LZespolona liczb;

  liczb.re=re;
  liczb.im=im;

  return liczb;
}


istream & operator >>(istream & strm, LZespolona & Skl){
    char znak;
    strm >> znak;
    if (znak != '(') strm.setstate(ios::failbit);
    strm >> Skl.re >> Skl.im >> znak;
    if (znak != 'i') strm.setstate(ios::failbit);
    strm >> znak;
    if (znak != ')') strm.setstate(ios::failbit);

return strm;
}

ostream & operator << (ostream & strm, LZespolona & Skl){
  strm << "(" << Skl.re << showpos << Skl.im << noshowpos << "i)";
  return strm;
}