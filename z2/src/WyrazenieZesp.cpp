#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

void WyswietlZesp(LZespolona Skl){
   cout << "(" << Skl.re << showpos << Skl.im << noshowpos << "i)";
}

void Wyswietl(WyrazenieZesp  WyrZ){
 WyswietlZesp(WyrZ.Arg1);

     switch(WyrZ.Op){
   case Op_Dodaj:
      cout<<"+";
      break;
   case Op_Odejmij:
      cout<<"-";
      break;
   case Op_Mnoz:
      cout<<"*";
      break;
   case Op_Dziel:
      cout<<"/";
      break;
     }
WyswietlZesp(WyrZ.Arg2);


 }

LZespolona Oblicz(WyrazenieZesp  WyrZ){
    LZespolona wynik;
    switch (WyrZ.Op)
    {
    case Op_Dodaj:
        wynik=WyrZ.Arg1+WyrZ.Arg2;
        break;
    case Op_Odejmij:
        wynik=WyrZ.Arg1-WyrZ.Arg2;
        break;
    case Op_Mnoz:
        wynik=WyrZ.Arg1*WyrZ.Arg2;
        break;
    case Op_Dziel:
        wynik=WyrZ.Arg1/WyrZ.Arg2;
        break;    
    }
    return wynik;
}

std::istream & operator >> (std::istream & strm, WyrazenieZesp & WyrZ) {
  strm >> WyrZ.Arg1 >> WyrZ.Op >> WyrZ.Arg2;
  return strm;
}

std::istream & operator >> (std::istream & strm, Operator & Op) {
  char znak;
  strm >> znak;
  switch (znak) {
   case '+':
	Op = Op_Dodaj;
        break;
   case '-': 
	Op = Op_Odejmij;
        break;
   case '*':
	 Op = Op_Mnoz;
         break;
    case '/':
 	Op = Op_Dziel;
        break;
  }
  return strm;
}

std::ostream & operator << (std::ostream & strm, WyrazenieZesp & WyrZ){
    strm << WyrZ.Arg1 << WyrZ.Op << WyrZ.Arg2;
    return strm;
}

std::ostream & operator << (std::ostream & strm, Operator & Op){
    switch (Op){
    case Op_Dodaj:
	strm<<'+';
	break;
    case Op_Odejmij:
	strm<<'-';
	break;
    case Op_Mnoz:
	strm<<'*';
	break;
    case Op_Dziel:
	strm<<'/';
	break;
    }
    return strm;
}