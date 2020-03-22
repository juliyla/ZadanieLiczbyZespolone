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

  
  Wynik.re = (Skl1.re*Skl2.re+Skl1.im*Skl2.im)/(Skl2.re*Skl2.re+Skl2.im*Skl2.im);
  Wynik.im = (Skl2.re*Skl1.im-Skl1.re*Skl2.im)/(Skl2.re*Skl2.re+Skl2.im*Skl2.im);
  return Wynik; 
  
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