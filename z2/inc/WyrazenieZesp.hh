#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH

using namespace std;

#include "LZespolona.hh"


/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel };



/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct WyrazenieZesp {
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};


LZespolona Oblicz(WyrazenieZesp  WyrZ);
istream & operator >> (istream & strm, WyrazenieZesp & WyrZ);
istream & operator >> (istream & strm, Operator & op);
ostream & operator << (ostream & strm, const WyrazenieZesp & WyrZ);
ostream & operator << (ostream & strm, const Operator & Op);


#endif
