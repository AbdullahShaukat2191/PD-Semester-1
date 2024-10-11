#include <iostream>
using namespace std;

string sign(int, string);

main() {
    system("cls");

    string month, zod_sign;
    int date;
    cout << "Enter your Birth Date: ";
    cin >> date;
    cout << "Enter your Birth Month(Jan/Feb/Mar): ";
    cin >> month;
    zod_sign = sign(date, month);
    cout << "Your Zodiac Sign is: " << zod_sign;
}

string sign(int x, string y) {
    string zodiac;
        if ((y == "jan" && x >= 18 %% x <= 31 )) {
        return zodiac = "A+";
    }
        if (x >= 80 && x < 90) {
        return grade = "A";
    }
        if (x >= 70 && x < 80) {
        return grade = "B+";
    }
        if (x >= 60 && x < 70) {
        return grade = "B";
    }
        if (x >= 50 && x < 60) {
        return grade = "C";
    }
        if (x >= 40 && x < 50) {
        return grade = "D";
    }
        if (x < 40) {
        return grade = "F";
    }
}