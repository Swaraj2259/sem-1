#include<iostream>
using namespace std;

// int main(){
//     int a,b,c;
//     cout <<"entre numertor and denomentor"<<endl;

//     cin>>a>>b;
//     c=b/a;

//   cout<<"div = "<<c<<endl;
// }

// int main(){
//     int a,b,c;
//     cout <<"entre numertor and denomentor"<<endl;

//     cin>>a>>b;
//     try
//     {
//         if(b==0){
//             throw b;
//         }
//         else 
//         {
//          c=a/b;
//          cout<<"div = "<<c;   
//         }
//     }
//     catch(int ex){
//         cout<<"error occured"<<ex<<endl;
//     }

//   cout<<"div = "<<c<<endl;
// }

// void divide (int x,int y, int z)
// {
//     cout<<"\n are outside the function";
//     if ((x-y)!=0)
//     {int r=z/(x-y);
//     cout<<"result = "<<r<<endl;
//     }
//     else
//     {
//         throw(x-y);

//     }
// }
// int main ()
// {
//     try {
//         cout<<"we are inside the try block"<<endl;
//         divide(10,20,30);
//         divide(10,10,20);
//     }
//     catch(int i)
//     {
//         cout<<"caught the exception"<<endl;

//     }
//  return 0;
// }

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// unsigned long long factorial(int n) {
//     if (n == 0) {
//         throw runtime_error("Error: Factorial of 0 is not defined.");
//     } else if (n == 1) {
//         throw runtime_error("Error: Factorial of 1 is not allowed.");
//     }

//     unsigned long long result = 1;
//     for (int i = 2; i <= n; ++i) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     int n;
//     cout << "Enter a positive integer greater than 1: ";
//     cin >> n;

//     try {
//         if (n < 0) {
//             throw invalid_argument("Error: Negative numbers are not allowed.");
//         }
//         unsigned long long result = factorial(n);
//         cout << "Factorial of " << n << " = " << result << endl;
//     } catch (const invalid_argument& e) {
//         cout << e.what() << endl;
//     } catch (const runtime_error& e) {
//         cout << e.what() << endl;
//     } catch (...) {
//         cout << "An unknown error occurred." << endl;
//     }

//     return 0;
// }                


#include<iostream>
using namespace std;
void test(int x)
{
    try{
        if(x==0) throw x;  //int
        if(x==-1) throw 'x';  //char
        if(x==1) throw 1.0;  //double
    }
    catch(...)  //catch all
    {
        cout<<"caught an exception \n";
    }
}
int main(){
    cout<<"testing gneric catch\n";
    test(-1);
    test(0);
    test(1);
    return 0;
}





















