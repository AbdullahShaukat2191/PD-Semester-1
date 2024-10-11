#include <iostream>
using namespace std;

double percentage(double, double, double, double, double);
string Grade(double);

main() {
    system("cls");

    string name, grade;
    double marks_eng, marks_math, marks_chem, marks_sci, marks_bio, result;
    cout << "Enter the Student's name: ";
    cin >> name;
    cout << "Enter Marks in English: ";
    cin >> marks_eng;
    cout << "Enter Marks in Maths: ";
    cin >> marks_math;
    cout << "Enter Marks in Chemistry: ";
    cin >> marks_chem;
    cout << "Enter Marks in Social Science: ";
    cin >> marks_sci;
    cout << "Enter Marks in Biology: ";
    cin >> marks_bio;
    cout << "Student's Name: " << name << endl;
    result = percentage(marks_eng, marks_math, marks_chem, marks_sci, marks_bio);
    cout << "Percentage: " << result << endl;
    grade = Grade(result);
    cout << "Grade: " << grade;
}

double percentage(double e, double m, double c, double s, double b) {
    double result = (e+m+c+s+b)/500*100; 
        return result;
}

string Grade(double x) {
    string grade;
        if (x >= 90 && x < 100) {
        return grade = "A+";
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