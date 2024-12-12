#include <iostream>
// For formatting output
using namespace std;

// Student class definition
class Student {
private:
    int rollNo;
    string name;
    int subject1, subject2, subject3;
    int totalMarks;

public:
    // Constructor to initialize a student
    Student(int r, string n, int s1, int s2, int s3) 
        : rollNo(r), name(n), subject1(s1), subject2(s2), subject3(s3) {
        totalMarks = subject1 + subject2 + subject3;
    }

    // Function to display student details
    void display() {
        cout << setw(10) << rollNo
             << setw(15) << name
             << setw(10) << subject1
             << setw(10) << subject2
             << setw(10) << subject3
             << setw(10) << totalMarks << endl;
    }
};

// Main function
int main() {
    vector<Student> students; // Vector to store students

    // Input student details
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        int rollNo, subject1, subject2, subject3;
        string name;

        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "Roll No: ";
        cin >> rollNo;
        cin.ignore(); // To consume the newline character
        cout << "Name: ";
        getline(cin, name);
        cout << "Marks in Subject 1: ";
        cin >> subject1;
        cout << "Marks in Subject 2: ";
        cin >> subject2;
        cout << "Marks in Subject 3: ";
        cin >> subject3;

        // Add the student to the vector
        students.emplace_back(rollNo, name, subject1, subject2, subject3);
    }

    // Display the result sheet
    cout << "\nResult Sheet:\n";
    cout << setw(10) << "Roll No"
         << setw(15) << "Name"
         << setw(10) << "Sub 1"
         << setw(10) << "Sub 2"
         << setw(10) << "Sub 3"
         << setw(10) << "Total" << endl;
    cout << string(65, '-') << endl;

for (Student &student : students) {
    student.display();
}

return 0;
}