//
//  main.cpp
//  Practica Calificada
//
//  Created by Fiorella Flores on 4/3/24.
//

#include <iostream>

#include "mylib.h"

int main()
{
    Date date1 (1, 1, 1900);
    Date date2 (1, 1, 1900);
    Date date3 (1, 1, 1900);
    
    date1.setYear(2020);
    date1.setMonth(01);
    date1.setDay(03);
    
    date2.setYear(2019);
    date2.setMonth(14);
    date2.setDay(15);
    
    date3.setYear(1500);
    date3.setMonth(12);
    date3.setDay(20);
    
    date1.displayDate();
    date2.displayDate();
    date3.displayDate();
    
    return 0;
}
