#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
    string name;
    int rollNo;
    int marks[5];  // 5 subjects
    int total;
    float percentage;
    char grade;

public:
    void inputDetails(int r) {
        rollNo = r;
        cout << "\nEnter name of student: ";
        cin.ignore();
        getline(cin, name);

        total = 0;
        cout << "Enter marks in 5 subjects (out of 100):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }

        percentage = total / 5.0;
        assignGrade();
    }

    void assignGrade() {
        if (percentage >= 90) grade = 'A';
        else if (percentage >= 75) grade = 'B';
        else if (percentage >= 60) grade = 'C';
        else if (percentage >= 50) grade = 'D';
        else grade = 'F';
    }

    void displayResult() {
        cout << left << setw(10) << rollNo 
             << setw(20) << name 
             << setw(10) << total 
             << setw(10) << fixed << setprecision(2) << percentage 
             << setw(5) << grade << endl;
    }

    float getPercentage() { return percentage; }
    int getTotal() { return total; }
    string getName() { return name; }
};

int main() {
    int n;
    cout << "==============================\n";
    cout << "   STUDENT RESULT ANALYZER\n";
    cout << "==============================\n";

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details for Student " << (i+1) << " ---\n";
        s[i].inputDetails(i+1);
    }

    cout << "\n==============================================================\n";
    cout << left << setw(10) << "Roll No" 
         << setw(20) << "Name" 
         << setw(10) << "Total" 
         << setw(10) << "Percent" 
         << setw(5) << "Grade" << endl;
    cout << "==============================================================\n";

    for (int i = 0; i < n; i++) {
        s[i].displayResult();
    }

    // Find topper
    int topperIndex = 0;
    for (int i = 1; i < n; i++) 
	{
        if (s[i].getPercentage() > s[topperIndex].getPercentage()) 
		{
            topperIndex = i;
        }
    }

    cout << "\nClass Topper: " << s[topperIndex].getName() 
         << " with " << s[topperIndex].getPercentage() << "%\n";

    return 0;
}

