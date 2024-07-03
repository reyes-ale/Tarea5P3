#pragma once
#include <iostream>
#include <string>
const int Max = 10; //linea #1
using namespace std; 

class Duty {
	string nombre; 
public:
	friend int main(); //linea #2
	friend void fill_duty(array<Duty, Max>& duties);
};