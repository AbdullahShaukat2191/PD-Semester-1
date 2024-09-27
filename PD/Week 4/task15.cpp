#include <iostream>
using namespace std;
void price(float);

main ()
{

 float rose_red, rose_white, tulips, total;
 cout << "Enter no. of Red Roses (2.00$): ";
 cin >> rose_red;
 cout << "Enter no. of White Roses (4.10$): ";
 cin >> rose_white;
 cout << "Enter no. of tulips (2.50$): ";
 cin >> tulips;
 total = (rose_red*2) + (rose_white*4.1) + (tulips*2.5); 
 price(total);

}

void price(float x)
{

 if (x > 200)
  {
    int discount = x-x/100*20;
    cout << "Original Price = $" << x << endl;
    cout << "Discounted Price = " << discount;
  }
 else
  {
    cout << "Original Price = $" << x << endl;
    cout << "No Discount Applied";
  }
}