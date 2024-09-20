#include <iostream>
using namespace std;
main() {
 cout<<"Enter no. of Players: ";
 float players;
 cin>> players;
 cout<<"Enter no. of Imposters: ";
 float imposters;
 cin>> imposters;
 float chance = imposters/players*100;
 cout<<"Chance of being an imposter: "<<chance<<"%";
}