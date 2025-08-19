#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n; //To take number of courses
    cout << "Welcome to CGPA Calculator\n";
    cout << "Enter number of courses: ";
    cin >> n;

    double gradePoints;
    double creditHours;
    double totalGradePoints = 0;
    double totalCredits = 0;

    // To store course details
    double grades[50], credits[50];

    // to Input grades and credit hours
    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i+1 << ":\n";
        cout << "Enter grade points: ";
        cin >> gradePoints;
        cout << "Enter credit hours: ";
        cin >> creditHours;

        grades[i] = gradePoints;
        credits[i] = creditHours;

        totalGradePoints += gradePoints * creditHours; 
        totalCredits += creditHours;
    }

    // Calculate CGPA
    double cgpa = totalGradePoints / totalCredits;

    // Display course details
    cout << "\n------------------------------\n";
    cout << "Course\tGrade\tCredits\n";
    cout << "------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << (i+1) << "\t" << grades[i] << "\t" << credits[i] << endl;
    }
    cout << "------------------------------\n";

    // For Final CGPA
    cout << fixed << setprecision(2);
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}