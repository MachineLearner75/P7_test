#include <iostream>
using namespace std;
#include "Date.hpp" //pas de ;

Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}

void Date::createDate(Date input){
    day = input.day;
    month = input.month;
    year = input.year;
}

void Date::printDate(){
    cout << day << endl;
    cout << month << endl;
    cout << year << endl;
}

