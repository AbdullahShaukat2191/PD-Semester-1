#include<iostream>
using namespace std;
void stickers();
main() {

 stickers();

}
 void stickers()
{

 float n, stickers;
 cout << "Enter Size of Cube (side length): ";
 cin >> n;
 cout << "Number of stickers are: " << (n*n)*6;
}