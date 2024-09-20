#include <iostream>
using namespace std;
main() {
 cout<<"Enter current world population: ";
 float population;
 cin>> population;
 cout<<"Enter the monthly birth rate: ";
 float birth_rate;
 cin >> birth_rate;
 float yearly_birth_rate = birth_rate*12;
 float pop_decade = yearly_birth_rate * 10;
 float pop_3_decades = pop_decade*3;
 float population_future = population + pop_3_decades;
 cout<<"Population in Three decades will be: "<<population_future;
}