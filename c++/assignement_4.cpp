#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int roll;
    string name;
    int sub1, sub2, sub3;
    int total;

    void calculateTotal() {
        total = sub1 + sub2 + sub3;
    }

    void displayResult() {
        cout<< "\t" << roll << "\t" << name << "\t" << sub1 << "\t" << sub2 << "\t" << sub3 << "\t" << total << endl;
    }
};

int main() {
    Student students[5];

   
    students[0].roll = 1;
    students[0].name = "A";
    students[0].sub1 = 80;
    students[0].sub2 = 70;
    students[0].sub3 = 90;

    students[1].roll = 2;
    students[1].name = "B";
    students[1].sub1 = 90;
    students[1].sub2 = 80;
    students[1].sub3 = 70;

    students[2].roll = 3;
    students[2].name = "C";
    students[2].sub1 = 70;
    students[2].sub2 = 90;
    students[2].sub3 = 80;

    students[3].roll = 4;
    students[3].name = "D";
    students[3].sub1 = 85;
    students[3].sub2 = 75;
    students[3].sub3 = 95;

    students[4].roll = 5;
    students[4].name = "E";
    students[4].sub1 = 95;
    students[4].sub2 = 85;
    students[4].sub3 = 75;

   
    for (int i = 0; i < 5; i++) {
        students[i].calculateTotal();
    }

   
    cout << "======================================================" << endl;
    cout << "Roll No.\tName\tS1\tS2\tS3\tTotal" << endl;
    cout << "======================================================" << endl;

    for (int i = 0; i < 5; i++) {
        students[i].displayResult();
    }

    return 0;
}

