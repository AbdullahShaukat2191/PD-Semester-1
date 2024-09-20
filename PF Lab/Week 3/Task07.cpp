#include <iostream>
using namespace std;
main() {
 cout<<"Enter size in Megabytes (MB): ";
 float megabyte ;
 cin >> megabyte;
 float kilobyte = megabyte*1024;
 float byte = kilobyte*1024;
 float bit = 8*byte;
 cout<<"That is "<<bit<<" in bits";
}