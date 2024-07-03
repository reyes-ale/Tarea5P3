#include <iostream>
#include <string>
#include <array>
#include "Duty.h"
using namespace std; 

int main() {
    array <Duty, Max> duties;
    fill_duty(duties);//linea #4
    for (Duty duty : duties)
        cout << "duty.nombre = \"" << duty.nombre << "\"" << endl; 
}
