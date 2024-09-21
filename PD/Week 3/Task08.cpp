#include <iostream>
using namespace std;
main() {
 cout<<"Enter vegetable price per Kgs (in coins): ";
 float veg_price;
 cin>> veg_price;
 cout<<"Enter fruit price per Kgs (in coins): ";
 float fruit_price;
 cin>> fruit_price;
 cout<<"Enter total Kgs of Vegetables: ";
 int veg_amount;
 cin>> veg_amount;
 cout<<"Enter total Kgs of fruits: ";
 int fruit_amount;
 cin>> fruit_amount;
 float veg_rupee = veg_price/1.94;
 float fruit_rupee = fruit_price/1.94;
 float veg_total = veg_rupee*veg_amount;
 float fruit_total = fruit_rupee*fruit_amount;
 float total = veg_total + fruit_total;
 cout<<"Total earnings in Rupees (Rps): "<<total;
}