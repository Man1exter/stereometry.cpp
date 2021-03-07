#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <set>
#include <iomanip>   //setw..
#include <list>
#include <forward_list>
#include <typeinfo>
#include <string>
#include <ctime>
#include <sstream>
#include <algorithm>
#include <deque>
#include <functional>
#include <typeinfo>
#include <iterator>
#include <math.h>
#include <set>
#include <chrono>
#include <thread>
#include <future>
#include "numbers.h"

using namespace std;

void menk(){
    cout << " ====> prostopadloscian" << endl; // done
    cout << " ====> szescian" << endl; // done
    cout << " ====> grantrojkatny" << endl; // done
    cout << " ====> granczworokatny" << endl; // done
    cout << " ====> granszesciokatny" << endl;
    cout << " ====> czworoscian" << endl;
    cout << " ====> ostrtrojkatny" << endl;
    cout << " ====> ostrczworokatny" << endl;
    cout << " ====> walec" << endl;
    cout << " ====> kula" << endl;
    cout << " ====> stozek" << endl;
}

void prostopadloscian(){
    cout << endl;
    cout << "wzor na objectosc (V = Ppodstawy * H) =====> V = abc" << endl;
    cout << "pole pow.calkowitej (Pc - suma scian) =======> Pc = 2ab + 2ac + 2bc" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "a,b,c -----------> krawedzie prostopadloscianu" << endl;
    cout << "Dp -------------> przekatna prostopadloscianu" << endl;
    cout << "Dp ---------------> Pierw.a2 + b2 + c2" << endl;
    cout << endl;
}

void szescian(){
cout << endl;
    cout << "wzor na objectosc (V = Ppodstawy * H) =====> V = a * a * a" << endl;
    cout << "pole pow.calkowitej (Pc - suma scian) =======> Pc = 6 * a * a" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "a-----------> krawedz szescianu" << endl;
    cout << "Dsz -------------> przekatna szescianu" << endl;
    cout << "Dsz ---------------> a pierwiastek 3" << endl;
    cout << endl;
}

void grantrojkatny(){
    cout << endl;
    cout << "wzor na objectosc (V = Ppodstawy * H) =====> V = a * a pierwiastek 3 / 4 * H" << endl;
    cout << "pole pow.calkowitej (Pc - suma scian) =======> Pc = 2 * a * a pierwiastek 3 / 4 + 3 * a * H" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "a-----------> krawedz podstawy" << endl;
    cout << "H ---------------> wysokosc graniastoslupa" << endl;
    cout << endl;
}

void granczworokatny(){
    cout << endl;
    cout << "wzor na objectosc (V = Ppodstawy * H) =====> V = a * a * H" << endl;
    cout << "pole pow.calkowitej (Pc - suma scian) =======> Pc = 2 * a * a + 4 * a * H" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "a-----------> krawedz podstawy" << endl;
    cout << "H ---------------> wysokosc graniastoslupa" << endl;
    cout << endl;
}

void granszesciokatny(){
    cout << endl;
    cout << "wzor na objectosc (V = Ppodstawy * H) =====> V = 6 * a * a pierwiastek 3 / 4 * H" << endl;
    cout << "pole pow.calkowitej (Pc - suma scian) =======> Pc = 2 * 6 * a * a pierwiastek 3 / 4 * H" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "a-----------> krawedz podstawy" << endl;
    cout << "H ---------------> wysokosc graniastoslupa" << endl;
    cout << endl;
}

void czworoscian(){
    cout << endl;
    cout << "wzor na objectosc (V = 1/3 * Ppodstawy * H) =====> V = a * a * a pierw 2 / 12" << endl;
    cout << "pole pow.calkowitej (Pc - suma scian) =======> Pc = a * a pierw3" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "a-----------> krawedz czworoscianu" << endl;
    cout << "H ---------------> wysokosc czworoscianu" << endl;
    cout << endl;
}

void ostrtrojkatny(){
    cout << endl;
    cout << "wzor na objectosc (V = 1/3 * Ppodstawy * H) =====> V = 1/3 * a * a pierw 3 / 4 * H" << endl;
    cout << "pole pow.calkowitej (Pc - suma scian) =======> Pc = a * a pierw 3 / 4 + 3 * 1/2 * a * h" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "a-----------> krawedz podstawy" << endl;
    cout << "H ---------------> wysokosc ostroslupa" << endl;
    cout << "h -----------------> wysokosc sciany bocznej" << endl;
    cout << "alfa -----------------> kat,jaki tworzy sciana boczna z plaszczyzna podstawy" << endl;
    cout << "beta -----------------> kat,jaki tworzy sciana boczna z plaszczyzna podstawy" << endl;
    cout << endl;
}

void ostrczworokatny(){
    cout << endl;
    cout << "wzor na objectosc (V = 1/3 * Ppodstawy * H) =====> V = 1/3 * a * a * H" << endl;
    cout << "pole pow.calkowitej (Pc - suma scian) =======> Pc = a * a + 4 * 1/2 * a * h" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "a-----------> krawedz podstawy" << endl;
    cout << "H ---------------> wysokosc ostroslupa" << endl;
    cout << "h -----------------> wysokosc sciany bocznej" << endl;
    cout << "alfa -----------------> kat,jaki tworzy sciana boczna z plaszczyzna podstawy" << endl;
    cout << "beta -----------------> kat,jaki tworzy sciana boczna z plaszczyzna podstawy" << endl;
    cout << endl;
}

void walec(){
    cout << endl;
    cout << "wzor na objectosc V = pir2 * H" << endl;
    cout << "pole pow.calkowitej Pc = 2pir2 + 2pirH" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "r-----------> promien" << endl;
    cout << "H ---------------> wysokosc" << endl;
    cout << endl;
}

void kula(){
    cout << endl;
    cout << "wzor na objectosc V = 4/3 * pir3" << endl;
    cout << "pole pow.calkowitej P = 4pir2" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "r-----------> promien" << endl;
    cout << endl;
}

void stozek(){
    cout << endl;
    cout << "wzor na objectosc V = 1/3pir2 * H" << endl;
    cout << "pole pow.calkowitej Pc = pir2 + pirl" << endl;
    cout << "                inne wazne informacje:     " << endl;
    cout << "r-----------> promien" << endl;
    cout << "H-----------> wysokosc" << endl;
    cout << "l-----------> tworzaca" << endl;
    cout << "alfa-----------> kat rozwarcia stozka" << endl;
    cout << endl;
}

void szescianObj(){
// pole powierzchni jednej sciany = 4 obj ?
// obj = a3
//calkowita pow = pc = 6a2
int a;
float x;
float v;
cout << "Podaj pole powierzchni jednej sciany" << endl;
cin >> a;

x = sqrt(a);
v = x * x * x;

cout << "Objetosc wynosi: " << v << endl;
}

void szescianPrzekatna(){
    int Pc;
    int b;
    int a;
cout << "Podaj pole powierzchni calkowitej" << endl;
cin >> Pc;

b = Pc / 6;
a = sqrt(b);

cout << " wynik => " << a << " pierwiastek3 <===== (bo szescian)" << endl; 
}

void szescianCalkowitaPow(){
    int obj;
    int v,v1,v2,a;;
    float Pc;
    cout << "Podaj obj szescianu" << endl;
    cin >> obj;

  v = sqrt((obj));
  v1 = v / 2;
  cout << "a wynosi: " << v1 << endl;

v2 = v1 * v1;

  Pc = v2 * 6;
  cout << "wynik Pc ====> " << Pc << endl;
}

void prostopadloscianObj(){
    float a,b,c;
    float wynik;
cout << "Podaj wymiary do obliczenia objetosci (podaj odrazu 3 wartosci)" << endl;
cin >> a;
cin >> b;
cin >> c;
wynik = a * b * c;
cout << "wynik ===> " << wynik << endl;
}

void prostopadloscianPrzekatna(){
    float a,b,c;
    float d;
    float wynikC;
    cout << "podaj wymiar przekatnej, aby obliczyc jej dlugosc (podaj odrazu 3 wartosci)" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "twoje dane: " << a << " x " << b << " x " << c << endl;
    d = a * a + b * b;
    cout << "przekatna podstawy: " << d << endl;
    cout << "przekatna podstawy dokladna: " << sqrt(d) << endl;
    cout << "wynik ostateczny: " << sqrt(d) << " pierwiastek 2" << endl;
}

void prostopadloscianPoleCalkowite(){
    float a,b,c;
    float a1,b2,c3;
    float pc;
    cout << "podaj boki dlugosci prostopadloscianu (podaj odrazu 3 wartosci)" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    a1 = a * b;
    b2 = a * c;
    c3 = b * c;
    pc = 2 * (a1 + b2 + c3);
    cout << "pole prostopadloscianu wynosi =========> " << pc << " cm4" << endl;
}

void grantrojkatnyObj(){
    float dlugosc;
    float wysokosc;
    float wynik1;
    float wynik2;
cout << "podaj bok dlugosci trojkata w podstawie" << endl;
cin >> dlugosc;
cout << "podaj tez tego wysokosc" << endl;
cin >> wysokosc;
cout << "dlugosc czyli a: " << dlugosc << " --- " << " wysokosc czyli H: " << wysokosc << endl;
wynik1 = dlugosc * dlugosc;
wynik2 = wynik1 * wysokosc;
cout << "wynik objetosci wynosi " << wynik2 << "pierwiastek 3 przez 4 ==========> wynik pierw3 / 4" << endl;
}

void grantrojkatnyPrzekatna(){
cout << endl;
cout << "brak danych opartych o jakiekolwiek zadania z przekatna w graniastoslupie trojkatnym" << endl;
cout << "wybierz inna pozycje" << endl;
cout << endl;
}

void grantrojkatnyPoleCalkowite(){
float pp;
float pb;
float pc;
float a;
cout << "podaj wartosc a:" << endl;
cin >> a;
pp = a * a / 4;
cout << "pole podstawy wynosi " << pp << " pierwiastek 3" << endl;
cout << endl;
cout << "pamietaj ze to trzy jednakowe prostokaty (w boczne)" << endl;
pb = 3 * 4 * pp;
cout << endl;
cout << "pole boczne wynosi: " << pb << " pierwiastek 3" << endl;
pc = 2 * pp + pb;
cout << endl;
cout << "pole calkowite wynosi: " << pc << " pierwiastek 3" << endl;
}

void granczworokatnyObj(){

}

void granczworokatnyPrzekatna(){
cout << endl;
cout << "brak danych opartych o jakiekolwiek zadania z przekatna w graniastoslupie trojkatnym" << endl;
cout << "wybierz inna pozycje" << endl;
cout << endl;
}

void granczworokatnyPoleCalkowite(){
float h;
float kp;
float pc;
float pp;
float pb;
cout << "podaj wysokosc" << endl;
cin >> h;
cout << "podaj krawedz podstawy" << endl;
cin >> kp;
pp = kp;
pb = h;
pc = 2 * pp * pp + 4 * pp * pb;
cout << "pole calkowite wynosi " << pc << endl;
}

void granszesciokatnyPoleCalkowite(){    
float a;
float h;
float pp;
float pb;
float pc;
float pcD;
    cout << "podaj krawedz podstawy" << endl;
    cin >> a;
    cout << "podaj wysokosc" << endl;
    cin >> h;
    pp = 3 * a * a;
    cout << "pole podstawy wynosi: " << pp << " pierwiastek 3 przez 2" << endl;
    pb = 6 * a * h;
    cout << "pole boczne wynosi " << pb << endl;
    pc = 2 * pp + pb;
    pcD = 2 * pp;
    pcD = pcD / 2;
    cout << "pole calkowite wynosi " << pcD << " (pierwiastek 3 + 4)"<< endl;
} 

void granszesciokatnyObj(){    
float obj;
float pp;
float podstawa;
float przekatna;
float podstawaKat;
float pierw;
float h;
cout << "podaj dlugosc przekatnej" << endl;
cin >> przekatna;
cout << "podaj kat nachylenia do podstawy" << endl;
cin >> podstawaKat;
pierw = przekatna / 2;
h = przekatna;
cout << "wysokosc wynosi " << h << " pierwiastek 3 przez 2 <======== ( mozna tez podzielic z dwojka !!!! ) "<< endl;
cout << "dlugosc ramienia podstawy wynosi " << pierw << " pierwiastek 2" << endl;
cout << endl;
pp = pierw * pierw;
cout << pp << " <===== tyle wynosi pole podstawy przez 2 (bo pierwiastek 2 razy 2)" << endl;
obj = pp * pierw;
cout << "wynik wynosi " << obj << " pierwiastek 3 przez 2" << endl;
}

void granszesciokatnyPrzekatna(){    
cout << endl;
}

void czworoscianPoleCalkowite(){    
cout << endl;
} 

void czworoscianObj(){    
cout << endl;
}

void czworoscianPrzekatna(){    
cout << endl;
}

void ostrtrojkatnyPoleCalkowite(){    
cout << endl;
} 

void ostrtrojkatnyObj(){    
cout << endl;
}

void ostrtrojkatnyPrzekatna(){    
cout << endl;
}

void ostrczworokatnyPoleCalkowite(){    
cout << endl;
} 

void ostrczworokatnyObj(){    
cout << endl;
}

void ostrczworokatnyPrzekatna(){    
cout << endl;
}

void walecPoleCalkowite(){    
cout << endl;
}

void walecObj(){    
cout << endl;
}

void walecPrzekatna(){    
cout << endl;
}

void kulaPoleCalkowite(){    
cout << endl;
}

void kulaObj(){    
cout << endl;
}

void kulaPrzekatna(){    
cout << endl;
}

void stozekPoleCalkowite(){    
cout << endl;
}

void stozekObj(){    
cout << endl;
}

void stozekPrzekatna(){    
cout << endl;
}


int main(){
    string bryla;
    int wybor;
    int wybor2;
    
    menk();

    cout << endl;
    cout << "-------------------------------------" << endl;
    cout << "[1] szescian objetosc" << endl;
    cout << "[2] szescian przekatna" << endl;
    cout << "[3] szescian calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[4] prostopadloscian objetosc" << endl;
    cout << "[5] prostopadloscian przekatna" << endl;
    cout << "[6] prostopadloscian calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[7] grantrojkatny objetosc" << endl;
    cout << "[8] grantrojkatny przekatna" << endl;
    cout << "[9] grantrojkatny calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[10] granczworokatny objetosc" << endl;
    cout << "[11] granczworokatny przekatna" << endl;
    cout << "[12] granczworokatny calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[13] granszesciokatny objetosc" << endl;
    cout << "[14] granszesciokatny przekatna" << endl;
    cout << "[15] granszesciokatny calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[16] czworoscian objetosc" << endl;
    cout << "[17] czworoscian przekatna" << endl;
    cout << "[18] czworoscian calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[19] ostrtrojkatny objetosc" << endl;
    cout << "[20] ostrtrojkatny przekatna" << endl;
    cout << "[21] ostrtrojkatny calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[22] ostrczworokatny objetosc" << endl;
    cout << "[23] ostrczworokatny przekatna" << endl;
    cout << "[24] ostrczworokatny calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[25] walec objetosc" << endl;
    cout << "[26] walec przekatna" << endl;
    cout << "[27] walec calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[28] kula objetosc" << endl;
    cout << "[29] kula przekatna" << endl;
    cout << "[30] kula calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;
    cout << "[31] stozek objetosc" << endl;
    cout << "[32] stozek przekatna" << endl;
    cout << "[33] stozek calkowtia powierzchnia" << endl;
    cout << "-------------------------------------" << endl;

   cout << "co potrzebne?" << endl;
   cout << " [1] ----> zadanie" << endl;
   cout << " [2] ----> informacja" << endl;
   cin >> wybor;
   
   if(wybor > 2){
           cout << "blad podawanych danych, popraw sie" << endl;
           cin >> wybor;
           if(wybor > 2){
               cout << "za duzo razy probowales" << endl;
               return 0;
           }
       }

   if(wybor == 1){

       cout << "Ktore zadanie:" << endl;
       cin >> wybor2;

       if(wybor2 == 1){
       szescianObj();
       } else if(wybor2 == 2){
       szescianPrzekatna();
       } else if(wybor2 == 3){
        szescianCalkowitaPow();
       } else if(wybor2 == 4){
           prostopadloscianObj();
       } else if(wybor2 == 5){
           prostopadloscianPrzekatna();
       } else if(wybor2 == 6){
           prostopadloscianPoleCalkowite();
       } else if(wybor2 == 7){
           grantrojkatnyObj();
       } else if(wybor2 == 8){
           grantrojkatnyPrzekatna();
       } else if(wybor2 == 9){
           grantrojkatnyPoleCalkowite();
       } else if(wybor2 == 10){
            granczworokatnyObj();
       } else if(wybor2 == 11){
            granczworokatnyPrzekatna();
       } else if(wybor2 == 12){
            granczworokatnyPoleCalkowite();
       } else if(wybor2 == 13){
            granszesciokatnyObj();
       } else if(wybor2 == 14){
            granszesciokatnyPoleCalkowite();
       } else if(wybor2 == 15){
            granszesciokatnyPrzekatna();
       } else if(wybor2 == 16){
            czworoscianPoleCalkowite();
       } else if(wybor2 == 17){
            czworoscianObj();
       } else if(wybor2 == 18){
            czworoscianPrzekatna();
       } else if(wybor2 == 19){
            ostrtrojkatnyPoleCalkowite();
       } else if(wybor2 == 20){
            ostrtrojkatnyObj();
       } else if(wybor2 == 21){
            ostrtrojkatnyPrzekatna();
       } else if(wybor2 == 22){
            ostrczworokatnyPoleCalkowite();
       } else if(wybor2 == 23){
            ostrczworokatnyObj();
       } else if(wybor2 == 24){
            ostrczworokatnyPrzekatna();
       } else if(wybor2 == 25){
            walecPoleCalkowite();
       } else if(wybor2 == 26){
            walecObj();
       } else if(wybor2 == 27){
            walecPrzekatna();
       } else if(wybor2 == 28){
            kulaPoleCalkowite();
       } else if(wybor2 == 29){
            kulaObj();
       } else if(wybor2 == 30){
            kulaPrzekatna();
       } else if(wybor2 == 31){
            stozekPoleCalkowite();
       } else if(wybor2 == 32){
            stozekObj();
       } else if(wybor2 == 33){
            stozekPrzekatna();
       }




   } else {

    cout << "Jaka bryla potrzebna?" << endl;
    cin >> bryla;

    if(bryla == "prostopadloscian"){
    prostopadloscian();
} else if(bryla == "szescian"){
 szescian();
} else if(bryla == "grantrojkatny"){
    grantrojkatny();
} else if(bryla == "granczworokatny"){
    granczworokatny();
} else if(bryla == "granszesciokatny"){
    granszesciokatny();
} else if(bryla == "czworoscian"){
    czworoscian();
} else if(bryla == "ostrtrojkatny"){
    ostrtrojkatny();
} else if(bryla == "ostrczworokatny"){
    ostrczworokatny();
} else if(bryla == "walec"){
    walec();
} else if(bryla == "kula"){
    kula();
} else {
    stozek();
}
}

return 0;

}