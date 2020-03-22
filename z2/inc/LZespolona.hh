#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include<iostream>
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
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */


LZespolona operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator / (LZespolona  Skl1,  LZespolona  Skl2);

istream & operator >>(istream & strm, LZespolona & Skl);
ostream & operator <<(ostream & strm, LZespolona & Skl); 

LZespolona Utworz(double re, double im);


#endif
