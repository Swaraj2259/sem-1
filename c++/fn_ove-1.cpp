// #include<iostream>
// using namespace std;

// int add(int a, int b){
//     return a+b;
// }
// int add(int a, int b, int c){
//     return a+b+c;
// }
// float add(float a, float b){
//     return a+b;
// }
// int main(){
//     cout<<"sum of 2 integers: "<<add(10, 20)<<endl;
//     cout<<"sum of 3 integers: "<<add(10, 20, 30)<<endl;
//     cout<<"sum of 2 floats: "<<add(10.5F, 20.5F)<<endl;
// }
#include <iostream>

#include <math.h>
using namespace std;
float area_c(float r)
{
    return 3.1415*r*r;
}
float area_R(float L,float B)
{
    return L*B;
}
float area_t(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    int choice;
    
    cout << "Choose the shape to calculate the area:\n";
    cout << "1. Circle\n2. Rectangle\n3. Triangle\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    if (choice == 1) {
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of the circle: " << area_c(radius) << endl;
    } 
    else if (choice == 2) {
        float length, breadth;
        cout << "Enter the length and breadth of the rectangle: ";
        cin >> length >> breadth;
        cout << "Area of the rectangle: " << area_R(length, breadth) << endl;
    } 
    else if (choice == 3) {
        float a, b, c;
        cout << "Enter the sides of the triangle: ";
        cin >> a >> b >> c;
        cout << "Area of the triangle: " << area_t(a, b, c) << endl;
    } 
    else {
        cout << "Invalid choice!\n";
    }

    return 0;
}






