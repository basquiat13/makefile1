driver: driver.o date.o 
  g++ -o driver driver.o date.o

driver.o: driver.cpp date.h
  g++ -c driver.cpp

date.o: date.cpp date.h
  g++ -c date.cpp
