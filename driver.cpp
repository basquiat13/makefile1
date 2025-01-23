// Author: Lailah
// Date: 1/22/2025
#include "date.h"
using namespace std;
int main(){
Date today;
// function calls
today.setMonth(1);
today.setDay(16);
today.setYear(2025);
cout << "The current year is " << today.getYear() << endl;
today.displayAmerican();
today.displayEuropean();
return 0;
}
