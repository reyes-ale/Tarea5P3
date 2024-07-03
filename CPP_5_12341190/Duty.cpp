#include <array>
#include "Duty.h"

void fill_duty(array<Duty, Max>& duties) {
    int i = 0;
    for (Duty& duty : duties) 
        duty.nombre = (i + 2 < 10 ? "0000" : "000") + to_string(i+=2); //linea #3
}