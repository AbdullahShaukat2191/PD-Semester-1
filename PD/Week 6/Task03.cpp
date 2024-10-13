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
        if (( y == "january" && (x >= 18 && x <= 31) ) || ( y == "february" && (x >= 1 && x <= 18) )) {
        return zodiac = "Aquarious";
    }
        if (( y == "march" && (x >= 21 && x <= 31) ) || ( y == "april" && (x >= 1 && x <= 19) )) {
        return zodiac = "Aries";
    }
        if (( y == "april" && (x >= 20 && x <= 30) ) || ( y == "may" && (x >= 1 && x <= 20) )) {
        return zodiac = "Taurus";
    }
        if (( y == "may" && (x >= 21 && x <= 31) ) || ( y == "june" && (x >= 1 && x <= 20) )) {
        return zodiac = "Gemini";
    }
        if (( y == "june" && (x >= 21 && x <= 30) ) || ( y == "july" && (x >= 1 && x <= 22) )) {
        return zodiac = "Cancer";
    }
        if (( y == "july" && (x >= 23 && x <= 31) ) || ( y == "august" && (x >= 1 && x <= 22) )) {
        return zodiac = "Leo";
    }
        if (( y == "august" && (x >= 23 && x <= 31) ) || ( y == "september" && (x >= 1 && x <= 22) )) {
        return zodiac = "Virgo";
    }
        if (( y == "september" && (x >= 23 && x <= 30) ) || ( y == "october" && (x >= 1 && x <= 22) )) {
        return zodiac = "Libra";
    }
        if (( y == "october" && (x >= 23 && x <= 31) ) || ( y == "november" && (x >= 1 && x <= 21) )) {
        return zodiac = "Scorpio";
    }
            if (( y == "november" && (x >= 22 && x <= 30) ) || ( y == "december" && (x >= 1 && x <= 21) )) {
        return zodiac = "Sagittarius";
    }
            if (( y == "december" && (x >= 22 && x <= 31) ) || ( y == "january" && (x >= 1 && x <= 19) )) {
        return zodiac = "Capricorn";
    }
    else {
        return zodiac = "Nothing, Enter a valid Date";
    }
}