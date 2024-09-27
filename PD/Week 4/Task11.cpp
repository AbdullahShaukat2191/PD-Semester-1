#include <iostream>
using namespace std;
void discount(string, int);
main ()
{

 int ticket;
 string country;
 cout << "Enter the Country's Name: ";
 cin >> country;
 cout << "Enter the ticket price in Dollars: ";
 cin >> ticket;
 
 discount(country, ticket);

}

void discount(string name, int amount)
{

 if (name == "pakistan")
  {
    int discounted = amount-amount/100*5;
    cout << "Discounted Price of Ticket is: " << discounted;
  }
 if (name == "ireland")
  {
    int discounted = amount-amount/100*10;
    cout << "Discounted Price of Ticket is: " << discounted;
  }
 if (name == "india")
  {
    int discounted = amount-amount/100*20;
    cout << "Discounted Price of Ticket is: " << discounted;
  }
 if (name == "england")
  {
    int discounted = amount-amount/100*30;
    cout << "Discounted Price of Ticket is: " << discounted;
  }
 if (name == "canada")
  {
    int discounted = amount-amount/100*45;
    cout << "Discounted Price of Ticket is: " << discounted;
  }
}