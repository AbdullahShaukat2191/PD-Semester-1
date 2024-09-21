#include <iostream>
using namespace std;
main() {
 cout<<"Enter the size of the fertilizer bag in pounds:  ";
 int size_bag;
 cin>> size_bag;
 cout<<"Enter the cost of the fertilizer bag:  ";
 int price_bag;
 cin>> price_bag;
 cout<<"Enter the area (sq.ft) covered by the bag:  ";
 int area_bag;
 cin>> area_bag;
 int cost = price_bag/size_bag;
 cout<<"Cost of Fertilizer per pound: $"<<cost;
 int cost_sq = price_bag/area_bag;
 cout<<"Cost of fertilizing per sq.ft: $"<<cost_sq;
}