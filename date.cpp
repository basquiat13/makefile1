// Author: Lailah
// Date: 1/22/2025
#include "date.h"
#include <iostream>

Date::Date() : day(16), month(1), year(2025){}

void Date::setDay(int d) {
  day= d;
}

void Date::setMonth(int m) {
  month= m;
}

void Date::setYear(int y) {
  year= y;
}

int Date::getDay() const {
  return day;
}

int Date::getMonth() const {
  return month;
}

int Date::getYear() const {
  return year;
}

void Date::displayAmerican() const {
  std::cout << "The American format for yesterdays date is " << month << "/" << day << "/" << year<< endl;
}

void Date::displayEuropean() const {
  std::cout << "The European format for yesterdays date is " << day << "/" << month << "/" << year<< endl;
}

