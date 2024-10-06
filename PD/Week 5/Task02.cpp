#include <iostream>
using namespace std;
double volume(double, double, double);
double convert(double);

main() {

    system("cls");
    double length, width, height, result, converted;
    cout << "Enter the Length of Pyramid: ";
    cin >> length;
    cout << "Enter the Width of Pyramid: ";
    cin >> width;
    cout << "Enter the Height of Pyramid: ";
    cin >> height;
    result = volume(length, width, height);
    converted = convert(result);
}

double volume(double l, double w, double h ){
    double vol = l*w*h/3;
    return vol;
}

double convert(double vol) {
    string units;
    double result;
    cout << "Enter Desired Output Units (mm, cm, m, km): ";
    cin >> units;
    if (units == "mm") {
        result = vol * 1000;
        cout << "The Volume is : " << result << " cubic milimeters" << endl; 
    }
        if (units == "cm") {
        result = vol * 100;
        cout << "The Volume is : " << result << " cubic cm" << endl;
    }

    if (units == "m") {
        result = vol ;
        cout << "The Volume is : " << result << " cubic meters" << endl;
    }

    if (units == "km") {
        result = vol * 1/1000;
        cout << "The Volume is : " << result << " cubic kilometers" << endl;
    }
}