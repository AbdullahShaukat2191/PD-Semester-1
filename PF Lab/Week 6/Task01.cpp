#include <iostream>
using namespace std;
string greaterNum(double, double);

main () {
    system("cls");
    double num1, num2;
    string result;
    cout << "Enter the First Number: ";
    cin >> num1;
    cout << "Enter the Second Number: ";
    cin >> num2;
    result = greaterNum(num1, num2);
    cout << "Number 1 is Greater than 2: " << result;
}

string greaterNum(double x, double y) {
    string result = "False";
    if (x > y) {
        return result = "True";
    }
    return result;
}
