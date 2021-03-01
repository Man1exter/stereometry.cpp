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
#include <set>
#include <chrono>
#include <thread>
#include <future>
#include "numbers.h"

using namespace std;

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


int main(){
    string bryla;

    cout << "Jaka bryla potrzebna?" << endl;
    cin >> bryla;

    if(bryla == "prostopadloscian"){
    prostopadloscian();
} else if(bryla == "szescian"){
 szescian();
}

}