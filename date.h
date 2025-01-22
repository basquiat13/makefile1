#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

class Date{
private:
  int day;
  int month;
  int year;

public:

  Date();

void setDay(int d);
void setMonth(int m);
void setYear(int y);

int getDay() const;
int getMonth() const;
int getYear() const;

void displayAmerican() const;
void displayEuropean() const;
};

#endif
