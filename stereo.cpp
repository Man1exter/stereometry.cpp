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
    cout << " ====> prostopadloscian" << endl;
    cout << " ====> szescian" << endl;
    cout << " ====> grantrojkatny" << endl;
    cout << " ====> granczworokatny" << endl;
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

}

void prostopadloscianPrzekatna(){
    
}

void prostopadloscianPoleCalkowite(){
    
}

void grantrojkatnyObj(){

}

void grantrojkatnyPrzekatna(){

}

void grantrojkatnyPoleCalkowite(){

}

void granczworokatnyObj(){

}

void granczworokatnyPrzekatna(){

}

void granczworokatnyPoleCalkowite(){
    
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

   cout << "co potrzebne? [1] -> zadanie [2] -> informacja" << endl;
   cin >> wybor;

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