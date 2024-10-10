#include <iostream>
using namespace std;
string parity(int);

main() {
    system("cls");
    int num;
    string result;
    cout << "Enter a 3-digit Number: ";
    cin >> num;
    result = parity(num);
    cout << "Existence of Parity: " << result;
}

string parity(int x) {
    int sum, n;
    string result;
    n = x % 10;
    if (n % 2 == 0) {
        cout << "As " <<x<< " is Even, ";
    }
    else {
        cout << "As " <<x<< " is Odd, ";
    }
    sum = n;
    n = n % 10;
    sum = sum + n;
    n = n % 10;
    sum = sum + n;
    if (sum % 2 == 0) {
        return result = "Fasle";
    }
    else {
        return result = "True";
    }
}