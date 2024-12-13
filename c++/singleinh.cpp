// #include<iostream>
// using namespace std;

// class stream{
// string sname;
// string dept;

// public:
// void setStream(string s, string d){
//     sname=s;
//     dept=d;
// }
// void getStream(){
//     cout<<"Stream Name: "<<sname<<endl;
//     cout<<"Department: "<<dept<<endl;
// }
// };

// class student:public stream{
//     int roll;
//     string sname;

//     public:
//     void setStudent(int r, string n){
//         roll=r;
//         sname=n;
//     }
//     void getStudent(){
//         cout<<"Roll No: "<<roll<<endl;
//         cout<<"Student Name: "<<sname<<endl;
//     }
// };
// int main (){
//     student s1;
//     s1.setStream("CSE", "Computer Science");
//     s1.setStudent(101, "prasad");
//     cout<<"Student Details: "<<endl;
//     s1.getStream();
//     s1.getStudent();
// }

#include<iostream>
using namespace std;

class stream{
protected:
string stname;
string dept;
};

class student:public stream{
    int roll;
    string stname;
    string sname;

    public:
void setStream(string s, string d,int r, string n){
    stname=s;
    dept=d;
    roll=r;
    sname=n;
}
void getStream(){
    cout<<"Stream Name: "<<stname<<endl;
    cout<<"Department: "<<dept<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"Student Name: "<<sname<<endl;
}
};

class student:public stream{
    int roll;
    string sname;

    public:
    void setStudent(int r, string n, string d,string s){
        roll=r;
        sname=n;
        dept=d;
        stname=s;
   
    }
    void getStudent(){
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Student Name: "<<sname<<endl;
        cout<<"Stream Name: "<<stname<<endl;
        cout<<"Department: "<<dept<<endl;
    }
};
int main (){
    student s1;
    s1.setStudent(101, "prasad", "CSE", "Computer Science");
    cout<<"Student Details: "<<endl;
    s1.getStudent();
   
}







