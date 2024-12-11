#include <iostream>
using namespace std;

// int main () {
//     int age;
//     cout << "Enter your age: ";
//     cin>>age;
//     if (age < 18) {
//         cout << "You are a minor." << endl;
//     } else {
//         cout << "You are an adult." << endl;
//     }
//     return 0;
// }


// even and odd 
// int main (){
//     int num;
//     cout << "entre a number :" ;
//     cin>>num;
//     if (num %2==0) {
//         cout << "its a even number \n";
//     } else {
//         cout<< " its a odd number\n " ;
//     }
// }

//sum of 1 to n number
// int main(){
//     int n=50;
   
//     int sum=0;

//     for(int i=1; i<=n; i++){
//         sum+=i; 
//     }
//     cout<<sum<<endl;
// }

// int main(){
//     int n=50;
   
//     int sum=0;

//     for(int i=1; i<=n; i++){
//         sum+=i; 
//         if (i==6)
//         break;
//     }
//     cout<<sum<<endl;
// }
// sum of 1 to n odd numbers
int main(){
    int n=5;
    int i=1;
    int sum=0;
    for(int i=1;i<=n;i+=2){
        sum+=i;
    }
    cout<<sum<<endl;
}





