#include <iostream>
using namespace std;

string suggestion(string, string);

main() {
    string temp, humidity, result;
    cout << "Enter the Temperature Today (Warm/Cold): ";
    cin >> temp;
    cout << "Enter Humidity (Dry/Humid): ";
    cin >> humidity;
    result = suggestion(temp, humidity);
    cout << "Recomended Acitivity: " << result;
}

string suggestion(string x, string y) {
    string result; 
    if (x == "warm" && y == "dry") {
        return result = "Table Tennis";
    }
    if (x == "warm" && y == "humid") {
        return result = "Swim";
    }
    if (x == "cold" && y == "dry") {
        return result = "Play BasketBall";
    }
    if (x == "cold" && y == "humid") {
        return result = "Watch TV";
    }
}