#include <iostream>
using namespace std;
double taxRate(string);
double final(double, double);

main () {
    system("cls");
    double tax_rate, price, taxed;
    string v_code;
    cout << "Enter the vehicle code (M, E, S, V, T): ";
    cin >> v_code;
    tax_rate = taxRate(v_code);
    cout << "Enter Price of the Product: $ ";
    cin >> price;
    taxed = final(price, tax_rate);
    cout << "The Final Price after tax is: $" << price + taxed ;

}

double taxRate(string code) {
    double rate;
        if (code == "M") {
        return rate = 6;
    }
        if (code == "E") {
        return rate = 8;
    }
        if (code == "S") {
        return rate = 10;
    }
        if (code == "V") {
        return rate = 12;
    }
        if (code == "T") {
        return rate = 15;
    }
}

double final(double p, double tax) {
    double result = p/100 * tax;
    return result;
}