#include <iostream>
using namespace std;
double peri(string, double);
main() {
    system("cls");
    double radius, result;
    string shape;
    cout << "Enter the shape (s for Square, c for Cirlce, h for Hexagon): ";
    cin >> shape;
    cout << "Enter no. sides (radius for circle): ";
    cin >> radius;
    result = peri(shape,radius);
    cout << "Perimeter is : " << result;
}

double peri(string x, double r) {
    double perimeter;
    if (x =="s") {
        perimeter = r * 4;
        return perimeter;
}
    if (x =="c") {
        perimeter = r * 6.28;
        return perimeter;
}
    if (x =="t") {
        perimeter = r * 3;
        return perimeter;
}
    if (x =="h") {
        perimeter = r * 6;
        return perimeter;
}
}